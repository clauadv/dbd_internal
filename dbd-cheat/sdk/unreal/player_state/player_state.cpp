#include <pch.h>

sdk::e_game_state sdk::a_player_state::get_player_state() {
	struct {
		sdk::e_game_state return_value;
	} params{};

	const auto flags = sdk::get_player_state->flags;
	sdk::get_player_state->flags |= 0x00000400;

	sdk::process_event(this, sdk::get_player_state, &params);
	sdk::get_player_state->flags = flags;

	return params.return_value;
}