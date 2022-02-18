#pragma once

namespace sdk {
	struct a_chest : sdk::a_actor {
		char pad_0001[0x21c]; // 0x148(0x21c)
		bool has_been_searched; // 0x364(0x01)

		bool is_chest() const;
	};
}