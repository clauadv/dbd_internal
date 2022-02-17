#pragma once
#include "../render/render.h"

namespace hooks {
	inline std::once_flag flag;
	bool initialize();

	namespace post_render {
		static constexpr auto index = 0x63;
		using fn = void(__thiscall*)(sdk::u_object*, sdk::u_canvas*);
		static void __stdcall hook(sdk::u_object* viewport_client, sdk::u_canvas* canvas);
	}
}