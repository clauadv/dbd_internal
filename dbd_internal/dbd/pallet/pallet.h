#pragma once

namespace dbd::pallet {
	enum class pallet_state {
		up,
		falling,
		fallen,
		destroyed,
		illusionary
	};

	class a_pallet : ue4::game_framework::a_actor {
	public:
		char pad_0001[0x200]; // 0x148(0x200)
		dbd::pallet::pallet_state state; // 0x348(0x01)
	};
}