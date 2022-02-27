#include <pch.h>
#include "../features.h"

void misc::fly::run(sdk::a_camper_player* my_camper) {
	constexpr auto speed = 40.f;

	// don't abuse this please :/
	if (GetAsyncKeyState(VK_RBUTTON)) {
		my_camper->launch_character({ 0.f, 0.f, speed });
	}
}