#include <includes.h>

bool dbd::window::a_window::is_blocked(ue4::game_framework::a_pawn* my_player) {
	struct {
		ue4::game_framework::a_pawn* my_player;
		bool return_value;
	} params{};

	params.my_player = my_player;

	ue4::sdk::process_event(this, ue4::sdk::is_window_blocked, &params);

	return params.return_value;
}