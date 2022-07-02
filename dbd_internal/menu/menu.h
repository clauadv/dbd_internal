#pragma once
#include "variables.h"

namespace menu {
	bool initialize();
	void handle_input(ue4::game_framework::a_pawn* my_player, ue4::game_framework::a_player_controller* player_controller);
	void render();
}