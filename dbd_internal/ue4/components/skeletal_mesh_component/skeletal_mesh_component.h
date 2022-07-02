#pragma once

namespace ue4::components {
	class u_skeletal_mesh_component : ue4::core_object::u_object {
	public:
		ue4::core_object::u_name get_bone_name(int index);
		ue4::math::vector get_bone_matrix(int index);
		ue4::math::vector_2d get_bone(int index, ue4::game_framework::a_player_controller* player_controller);
		void dump_bones();
	};
}