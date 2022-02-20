#pragma once

namespace sdk {
	enum class e_hatch_state : std::uint8_t {
		hidden = 0,
		default_close = 1,
		opened = 2,
		forced_close = 3,
		max = 4
	};

	struct a_hatch : sdk::a_actor {
		char pad_0001[0x230]; // 0x148(0x230)
		sdk::e_hatch_state state; // 0x378(0x01)

		bool is_hatch() const;
	};
}