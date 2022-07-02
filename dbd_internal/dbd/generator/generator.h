#pragma once

namespace dbd::generator {
	class a_generator : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x1f1]; // 0x148(0x1f1)
		bool is_repaired; // 0x339(0x01)
		char pad_0002[0xe]; // 0x33a(0xe)
		float percent_complete; // 0x348(0x04)
		char pad_0003[0x11c]; // 0x34c(0x11c)
		bool is_blocked; // 0x468(0x01)

		std::wstring get_repair_percent();
	};
}