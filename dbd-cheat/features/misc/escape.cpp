#include <pch.h>
#include "../features.h"

void misc::escape::run(sdk::a_player_state* state) {
	if (!variables::misc::escape) return;

	if (GetAsyncKeyState(variables::misc::escape_key)) {
		state->set_player_state(sdk::e_game_state::escaped, false);
	}
}