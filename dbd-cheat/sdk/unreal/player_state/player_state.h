#pragma once

namespace sdk {
	struct a_actor;

	struct a_player_state : sdk::a_actor {
		char pad_0001[0x150]; // 0x148(0x150)
		sdk::a_pawn* pawn_private; // 0x298(0x08)
		char pad_0002[0x78]; // 0x2a0(0x78)
		sdk::u_string player_name_private; // 0x318(0x10)
	};
}