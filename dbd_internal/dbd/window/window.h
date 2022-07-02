#pragma once

namespace dbd::window {
	class a_window : public ue4::game_framework::a_actor {
	public:
		bool is_blocked(ue4::game_framework::a_pawn* my_player);
	};
}