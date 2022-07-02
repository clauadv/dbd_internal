#pragma once

namespace ue4::components {
	class u_skeletal_mesh_component;
}

namespace ue4::game_framework {
	class a_player_state;

	class a_pawn : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x108]; // 0x148(0x108)
		ue4::game_framework::a_player_state* player_state; // 0x250(0x08)
		char pad_0002[0x38]; // 0x258(0x38)
		ue4::components::u_skeletal_mesh_component* mesh; // 0x290(0x08)

		void launch_character(const ue4::math::vector& velocity, const bool xy_override = false, const bool z_override = false);
	};
}