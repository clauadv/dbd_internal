#include <includes.h>
#include "hooks.h"

bool hooks::initialize() {
	const auto world = *reinterpret_cast<decltype(ue4::engine::world)*>(ue4::engine::world);
	if (!world) return false;

	const auto local_player = world->owning_game_instance->local_players[0];
	if (!local_player) return false;

	const auto viewport_client = local_player->viewport_client;
	if (!viewport_client) return false;

	void** viewport_client_vtable = viewport_client->vf_table;
	if (!viewport_client_vtable) return false;

	if (MH_Initialize() != MH_OK) throw std::runtime_error(_("failed to initialize min_hook"));

	if (MH_CreateHook(viewport_client_vtable[hooks::post_render::index], &hooks::post_render::hook, reinterpret_cast<void**>(&hooks::post_render::original)) != MH_OK) {
		throw std::runtime_error(_("failed to hook post_render"));
	}

	if (d3d11::initialize()) {
		if (MH_CreateHook(reinterpret_cast<void*>(d3d11::get_present()), &present::hook, reinterpret_cast<void**>(&present::original)) != MH_OK) {
			throw std::runtime_error(_("failed to hook present"));
		}
	}

	if (MH_CreateHook((void*)ue4::sdk::set_fov, &hooks::set_fov::hook, reinterpret_cast<void**>(&hooks::set_fov::original)) != MH_OK) {
		throw std::runtime_error(_("failed to hook set_fov"));
	}

	if (MH_EnableHook(nullptr) != MH_OK) throw std::runtime_error(_("failed to initialize hooks"));

	return true;
}

long __stdcall hooks::present::hook(IDXGISwapChain* swap_chain, const unsigned int sync_interval, const unsigned int flags) {
	std::call_once(flag, [&]() {
		if (SUCCEEDED(swap_chain->GetDevice(__uuidof(ID3D11Device), reinterpret_cast<void**>(&d3d11::device)))) {
			d3d11::device->GetImmediateContext(&d3d11::context);

			DXGI_SWAP_CHAIN_DESC swap_chain_desc;
			swap_chain->GetDesc(&swap_chain_desc);
			hooks::window = swap_chain_desc.OutputWindow;

			ID3D11Texture2D* back_buffer{};
			swap_chain->GetBuffer(0, __uuidof(ID3D11Texture2D), reinterpret_cast<void**>(&back_buffer));

			if (back_buffer != nullptr) {
				d3d11::device->CreateRenderTargetView(back_buffer, nullptr, &d3d11::render_target_view);
			}

			back_buffer->Release();

			wndproc::original = reinterpret_cast<WNDPROC>(SetWindowLongPtrA(hooks::window, GWLP_WNDPROC, reinterpret_cast<long long>(wndproc::hook)));

			menu::initialize();
		}
	});

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	menu::render();
	features::misc::watermark::draw();

	ImGui::EndFrame();
	ImGui::Render();

	const auto& io = ImGui::GetIO();
	render::screen = { io.DisplaySize.x, io.DisplaySize.y };

	d3d11::context->OMSetRenderTargets(1, &d3d11::render_target_view, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return present::original(swap_chain, sync_interval, flags);
}

std::int64_t __stdcall hooks::wndproc::hook(const HWND hwnd, const unsigned int message, const WPARAM wparam, const LPARAM lparam) {
	if (message == WM_KEYDOWN && wparam == VK_INSERT) {
		variables::menu::opened = !variables::menu::opened;
	}

	std::int64_t ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	ImGui_ImplWin32_WndProcHandler(window, message, wparam, lparam);

	return CallWindowProcA(wndproc::original, hwnd, message, wparam, lparam);
}

std::int64_t __fastcall hooks::set_fov::hook(float* rcx) {
	if (variables::misc::fov_changer) {
		rcx[0x94] = variables::misc::fov_value;
	}

	return hooks::set_fov::original(rcx);
}

bool hooks::release() {
	MH_Uninitialize();

	MH_DisableHook(nullptr);
	MH_RemoveHook(nullptr);

	utils::console::release();

	return true;
}