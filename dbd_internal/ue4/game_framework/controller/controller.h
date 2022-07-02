#pragma once

namespace ue4::game_framework {
	class a_player_state;

	class a_controller : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0xf0]; // 0x148(0xf0)
		ue4::game_framework::a_player_state* player_state; // 0x238(0x08)
	};
}