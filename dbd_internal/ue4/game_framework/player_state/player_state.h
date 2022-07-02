#pragma once

namespace ue4::game_framework {
	class a_player_state : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0xf0]; // 0x148(0xf0)
		std::int8_t ping; // 0x238(0x01)
		char pad_0002[0x5f]; // 0x239(0x5f)
		ue4::game_framework::a_pawn* pawn_private; // 0x298(0x08)
		char pad_0003[0x78]; // 0x2a0(0x78)
		ue4::containers::f_string player_name_private; // 0x318(0x10)
	};
}