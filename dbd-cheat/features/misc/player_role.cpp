#include <pch.h>
#include "../features.h"

void misc::player_role::run(sdk::a_player_state* state) {
	if (!variables::misc::role) return;

	if (GetAsyncKeyState(variables::misc::role_key) & 0x01) {
		state->set_player_role(static_cast<sdk::e_player_role>(variables::misc::role_type));
	}
}