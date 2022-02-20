#pragma once

namespace sdk {
	template<class T>
	struct u_array;
	struct a_player_state;

	struct a_game_state_base {
		char pad_0001[0x248]; // 0x00(0x248)
		sdk::u_array <sdk::a_player_state*> player_array; // 0x248(0x10)
	};
}