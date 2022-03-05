#include <pch.h>
#include "../features.h"

void misc::immobilize::run(sdk::a_camper_player* my_camper) {
	if (!variables::misc::immobilize) return;

	if (GetAsyncKeyState(variables::misc::immobilize_key) & 0x01) {
		my_camper->set_immobilized(static_cast<sdk::immobilize_state>(variables::misc::immobilize_type));
	}
}