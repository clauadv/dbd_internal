#pragma once

namespace sdk {
	struct u_player_interaction : sdk::u_object {
		char pad_0001[0x2a8]; // 0x30(0x2a8)
		sdk::u_skillcheck* skillcheck; // 0x02d8(0x08)
	};
}