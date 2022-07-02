#pragma once

namespace dbd::escape_door {
	class a_escape_door : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x238]; // 0x148(0x238)
		bool activated; // 0x380(0x01)

		bool is_opened();
	};
}