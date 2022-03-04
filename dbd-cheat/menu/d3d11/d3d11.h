#pragma once
#include <cstdint>
#include <dxgi.h>
#include <d3d11.h>
#include "../../utils/libraries/lazy_importer.h"

namespace d3d11 {
	inline ID3D11Device* device = nullptr;
	inline ID3D11DeviceContext* context = nullptr;
	inline ID3D11RenderTargetView* render_target_view;
	static std::uint64_t* methods_table;

	bool initialize();
	unsigned long long get_present();
}