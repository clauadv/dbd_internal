#pragma once

namespace dbd::searchable {
	class a_searchable : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x21c]; // 0x148(0x21c)
		bool has_been_searched; // 0x364(0x01)
	};
}