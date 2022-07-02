#include <includes.h>

dbd::dbd_player_state::player_state dbd::dbd_player_state::a_dbd_player_state::get_player_game_state() {
	struct {
		dbd::dbd_player_state::player_state return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::get_player_game_state, &params);

	return params.return_value;
}