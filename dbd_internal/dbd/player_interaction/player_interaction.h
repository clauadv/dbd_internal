#pragma once

namespace dbd::skillcheck {
	class u_skillcheck;
}

namespace dbd::player_interaction {
	class u_player_interaction : public ue4::core_object::u_object {
	public:
		char pad_0001[0x2b8]; // 0x30(0x2b8)
		dbd::skillcheck::u_skillcheck* skillcheck; // 0x2e8(0x08)
	};
}