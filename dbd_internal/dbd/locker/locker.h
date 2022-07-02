#pragma once

namespace dbd::locker {
	class a_locker : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x2c1]; // 0x148(0x2c1)
		bool prevent_all_interactions; // 0x409(0x01)
	};
}