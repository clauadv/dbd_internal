#include <pch.h>

sdk::u_name sdk::u_skeletal_mesh_component::get_bone_name(const int index) {
	struct {
		int index;
		sdk::u_name return_value;
	} params{};

	params.index = index;

	sdk::process_event(this, sdk::get_bone_name, &params);

	return params.return_value;
}

sdk::vector sdk::u_skeletal_mesh_component::get_bone_matrix(const int index) {
	const auto fn = reinterpret_cast<matrix*(*)(sdk::u_skeletal_mesh_component*, matrix*, int)>(sdk::get_bone_matrix);

	matrix matrix{};
	fn(this, &matrix, index);

	return sdk::vector({ matrix.m[3][0], matrix.m[3][1], matrix.m[3][2] });
}

sdk::vector_2d sdk::u_skeletal_mesh_component::get_bone(const int index, sdk::a_player_controller* player_controller) {
	const auto world = this->get_bone_matrix(index);
	sdk::vector_2d screen{};

	if (player_controller->world_to_screen(world, screen)) {
		if (screen.x != 0.f && screen.y != 0.f) return screen;
	}

	return { 0.f,0.f };
}

void sdk::u_skeletal_mesh_component::dump_bones() {
	for (auto i = 0; i < 200; i++) {
		std::string bone_name = this->get_bone_name(i).get_name();
		if (bone_name.find("None") != std::string::npos) break;

		std::ranges::transform(bone_name.begin(), bone_name.end(), bone_name.begin(), ::tolower);
		std::cout << bone_name << " = " << i << "," << std::endl;
	}
}