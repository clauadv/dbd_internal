#pragma once

namespace sdk {
	template<class T>
	struct u_array;
	struct a_game_state_base;
	struct u_level;
	struct u_game_instance;

	struct u_world {
		char pad_0001[0x38]; // 0x00(0x38)
		sdk::u_level* persistent_level; // 0x38(0x08)
		char pad_0002[0xf0]; // 0x40(0xf0)
		sdk::a_game_state_base* game_state; // 0x130(0x08)
		char pad_0003[0x10]; // 0x138(0x10)
		sdk::u_array<sdk::u_level*> levels; // 0x148(0x10)
		char pad_0004[0x38]; // 0x158(0x30)
		sdk::u_game_instance* owning_game_instance; // 0x190(0x08)
	};

	inline u_world* world;
}