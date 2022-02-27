#pragma once

namespace sdk {
	struct u_skeletal_mesh_component;
	struct a_actor;
	struct a_player_state;

	struct a_pawn : sdk::a_actor {
		char pad_0001[0x108]; // 0x148(0x108)
		sdk::a_player_state* player_state; // 0x250(0x08)
		char pad_0002[0x38]; // 0x258(0x38)
		sdk::u_skeletal_mesh_component* mesh; // 0x290(0x08)

		void launch_character(const sdk::vector& velocity, bool xy_override = false, bool z_override = false);
	};
}