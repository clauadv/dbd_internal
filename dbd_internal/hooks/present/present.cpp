#include <includes.h>
#include "../hooks.h"

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