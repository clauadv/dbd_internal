#pragma once

namespace sdk {
	struct a_generator : sdk::a_actor {
		char pad_0001[0x1f1]; // 0x148(0x1f1)
		bool is_repaired; // 0x339(0x01)
		char pad_0002[0xe]; // 0x33a(0xe)
		float native_percent_complete; // 0x348(0x04)
		char pad_0003[0x11c]; // 0x34c(0x11c)
		bool is_blocked; // 0x468(0x01)

		bool is_generator() const;
		std::wstring get_repair_percent() const;
	};
}