#pragma once

namespace dbd::hatch {
	enum class hatch_state {
		hidden,
		default_close,
		opened,
		forced_close
	};

	class a_hatch : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x230]; // 0x148(0x230)
		dbd::hatch::hatch_state state; // 0x378(0x01)
	};
}