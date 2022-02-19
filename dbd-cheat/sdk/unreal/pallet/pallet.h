#pragma once

namespace sdk {
	enum class e_pallet_state : std::uint8_t {
		up = 0,
		falling = 1,
		fallen = 2,
		destroyed = 3,
		illusionary = 4,
		max = 5,
	};

	struct a_pallet : sdk::a_actor {
		char pad_0001[0x200]; // 0x148(0x200)
		sdk::e_pallet_state state; // 0x348(0x01)

		bool is_pallet() const;
	};
}