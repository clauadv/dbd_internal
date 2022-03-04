#pragma once

namespace sdk {
	struct a_actor;

	enum class e_game_state : std::uint8_t {
		active = 0,
		dead = 1,
		escaped = 2,
		escaped_injured = 3,
		sacrificed = 4,
		none = 5,
		disconnected = 6,
		manually_left_match = 7,
		max = 8
	};

	struct a_player_state : sdk::a_actor {
		char pad_0001[0xf0]; // 0x148(0xf0)
		std::int8_t ping; // 0x238(0x01)
		char pad_0002[0x5f]; // 0x239(0x5f)
		sdk::a_pawn* pawn_private; // 0x298(0x08)
		char pad_0003[0x78]; // 0x2a0(0x78)
		sdk::u_string player_name_private; // 0x318(0x10)

		sdk::e_game_state get_player_state();
	};
}