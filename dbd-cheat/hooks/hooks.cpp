#include <pch.h>
#include "hooks.h"
#include "../features/features.h"
#include "../menu/menu.h"

bool hooks::initialize() {
	const auto world = *reinterpret_cast<decltype(sdk::world)*>(sdk::world);
	if (!world) return false;

	const auto game_instance = world->owning_game_instance;
	if (!game_instance) return false;

	const auto local_player = game_instance->local_players[0];
	if (!local_player) return false;

	const auto viewport_client = local_player->viewport_client;
	if (!viewport_client) return false;

	void** viewport_client_vtable = viewport_client->vf_table;
	if (!viewport_client_vtable) return false;

	if (MH_Initialize() != MH_OK) {
		throw std::runtime_error(_("failed to initialize hooking system."));
	}

	if (MH_CreateHook(viewport_client_vtable[post_render::index], &post_render::hook, reinterpret_cast<void**>(&post_render::original)) != MH_OK) {
		throw std::runtime_error(_("failed to initialize post render."));
	}

	if (d3d11::initialize()) {
		if (MH_CreateHook(reinterpret_cast<void*>(d3d11::get_present()), &present::hook, reinterpret_cast<void**>(&present::original)) != MH_OK) {
			throw std::runtime_error(_("failed to initialize present."));
		}
	}

	if (MH_EnableHook(nullptr) != MH_OK) {
		throw std::runtime_error(_("failed to initialize hooks."));
	}

	return true;
}

void __stdcall hooks::post_render::hook(sdk::u_object* viewport_client, sdk::u_canvas* canvas) {
	render::canvas = canvas;

	const auto world = *reinterpret_cast<sdk::u_world**>(sdk::world);
	if (!world) return;

	const auto game_state = world->game_state;
	if (!game_state) return;

	const auto local_player = world->owning_game_instance->local_players[0];
	if (!local_player) return;

	const auto player_controller = local_player->player_controller;
	if (!player_controller) return;

	hooks::delta_time = reinterpret_cast<sdk::u_gameplay_statics*>(viewport_client)->get_delta_time();

	const auto my_player = player_controller->acknowledged_pawn;
	if (!my_player) return;

	misc::fov_changer::run(local_player);
	menu::handle_input(my_player, player_controller);

	visuals::killer::run(world, my_player, player_controller);
	visuals::survivor::run(world, my_player, player_controller);
	visuals::entities::run(world, my_player, player_controller);

	post_render::original(viewport_client, canvas);
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
	visuals::watermark::draw();

	ImGui::EndFrame();
	ImGui::Render();

	const auto& io = ImGui::GetIO();
	render::screen = { io.DisplaySize.x, io.DisplaySize.y };

	d3d11::context->OMSetRenderTargets(1, &d3d11::render_target_view, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return present::original(swap_chain, sync_interval, flags);
}

LRESULT __stdcall hooks::wndproc::hook(const HWND hwnd, const unsigned int message, const WPARAM wparam, const LPARAM lparam) {
	if (message == WM_KEYDOWN && wparam == VK_INSERT) {
		variables::menu::opened = !variables::menu::opened;
	}

	LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	ImGui_ImplWin32_WndProcHandler(window, message, wparam, lparam);

	return CallWindowProcA(wndproc::original, hwnd, message, wparam, lparam);
}