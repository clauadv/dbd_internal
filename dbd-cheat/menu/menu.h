#pragma once
#include "variables.h"

namespace menu {
	bool initialize();
	void handle_input(sdk::a_pawn* my_player, sdk::a_player_controller* player_controller);
	void render();
}