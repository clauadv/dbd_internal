#pragma once

namespace hooks {
	inline HWND window;
	inline float delta_time;

	bool initialize();
	bool release();
}

namespace hooks::post_render {
	static constexpr auto index = 0x66;
	using fn = void(__thiscall*)(ue4::core_object::u_object*, ue4::engine::u_canvas*);
	inline fn original;
	void __stdcall hook(ue4::core_object::u_object* viewport_client, ue4::engine::u_canvas* canvas);
}

namespace hooks::present {
	inline std::once_flag flag;
	using fn = long(__stdcall*)(IDXGISwapChain*, unsigned int, unsigned int);
	inline fn original;
	long __stdcall hook(IDXGISwapChain* swap_chain, unsigned int sync_interval, unsigned int flags);
}

namespace hooks::wndproc {
	using fn = std::int64_t(__stdcall*)(HWND, UINT, WPARAM, LPARAM);
	inline fn original;
	std::int64_t __stdcall hook(HWND hwnd, unsigned int message, WPARAM wparam, LPARAM lparam);
}

namespace hooks::set_fov {
	using fn = std::int64_t(__fastcall*)(float*);
	inline fn original;
	std::int64_t __fastcall hook(float* fov);
}