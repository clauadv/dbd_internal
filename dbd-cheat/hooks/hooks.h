#pragma once
#include "../render/render.h"
#include "menu/d3d11/d3d11.h"

namespace hooks {
	inline HWND window;
	inline float delta_time;
	bool initialize();

	namespace post_render {
		static constexpr auto index = 0x66;
		using fn = void(__thiscall*)(sdk::u_object*, sdk::u_canvas*);
		inline fn original;
		void __stdcall hook(sdk::u_object* viewport_client, sdk::u_canvas* canvas);
	}

	namespace present {
		inline std::once_flag flag;
		using fn = long(__stdcall*)(IDXGISwapChain*, unsigned int, unsigned int);
		inline fn original;
		long __stdcall hook(IDXGISwapChain* swap_chain, unsigned int sync_interval, unsigned int flags);
	}

	namespace wndproc {
		using fn = std::int64_t(__stdcall*)(HWND, UINT, WPARAM, LPARAM);
		inline fn original;
		std::int64_t __stdcall hook(HWND hwnd, unsigned int message, WPARAM wparam, LPARAM lparam);
	}
}
