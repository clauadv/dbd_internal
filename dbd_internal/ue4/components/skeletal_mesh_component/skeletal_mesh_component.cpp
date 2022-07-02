#include <includes.h>

ue4::core_object::u_name ue4::components::u_skeletal_mesh_component::get_bone_name(const int index) {
	struct {
		int index;
		ue4::core_object::u_name return_value;
	} params{};

	params.index = index;

	ue4::sdk::process_event(this, ue4::sdk::get_bone_name, &params);

	return params.return_value;
}

ue4::math::vector ue4::components::u_skeletal_mesh_component::get_bone_matrix(const int index) {
	const auto fn = reinterpret_cast<ue4::math::matrix * (*)(ue4::components::u_skeletal_mesh_component*, ue4::math::matrix*, int)>(ue4::sdk::bone_matrix);

	ue4::math::matrix matrix{};
	fn(this, &matrix, index);

	return ue4::math::vector({ matrix.m[3][0], matrix.m[3][1], matrix.m[3][2] });
}

ue4::math::vector_2d ue4::components::u_skeletal_mesh_component::get_bone(const int index, ue4::game_framework::a_player_controller* player_controller) {
	const auto world = this->get_bone_matrix(index);
	ue4::math::vector_2d screen{};

	if (player_controller->world_to_screen(world, screen)) {
		if (screen.x != 0.f && screen.y != 0.f) return screen;
	}

	return { 0.f, 0.f };
}

void ue4::components::u_skeletal_mesh_component::dump_bones() {
	for (auto i = 0; i < 200; i++) {
		std::string bone_name = this->get_bone_name(i).get_name();
		if (bone_name.find("None") != std::string::npos) break;

		std::ranges::transform(bone_name.begin(), bone_name.end(), bone_name.begin(), ::tolower);
		std::cout << bone_name << " = " << i << "," << std::endl;
	}
}