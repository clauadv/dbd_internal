#pragma once

namespace sdk {
	struct a_player_state;
	struct a_actor;

	struct a_controller : sdk::a_actor {
		char pad_0001[0xf0]; // 0x148(0xf0)
		sdk::a_player_state* player_state; // 0x238(0x08)
	};
}