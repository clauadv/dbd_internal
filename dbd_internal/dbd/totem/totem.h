#pragma once

namespace dbd::totem {
	enum class totem_state {
		cleansed,
		dull,
		hex,
		boon
	};

	class a_totem : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x220]; // 0x148(0x220)
		ue4::containers::t_array<void*> bound_perks; // 0x368(0x10)
		dbd::totem::totem_state state; // 0x378(0x01)

		std::wstring get_perk_name(std::string name);
	};
}