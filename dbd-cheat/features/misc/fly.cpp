#include <pch.h>
#include "../features.h"

void misc::fly::run(sdk::a_camper_player* my_camper) {
	if (!variables::misc::fly) return;

	const auto speed = variables::misc::fly_speed;

	// don't abuse this please :/
	if (GetAsyncKeyState(variables::misc::fly_key)) {
		my_camper->launch_character({ 0.f, 0.f, speed });
	}
}