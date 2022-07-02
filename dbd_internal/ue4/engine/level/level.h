#pragma once

namespace ue4::game_framework {
	class a_actor;
}

namespace ue4::engine {
	class u_level {
	public:
		char pad_0001[0xa0]; // 0x00(0xa0)
		ue4::containers::t_array<ue4::game_framework::a_actor*> actors; // 0xa0(0x10)
	};
}