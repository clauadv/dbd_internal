#pragma once
#include <unordered_map>

namespace dbd::bones {
	inline std::unordered_map < std::uint32_t, std::unordered_map<std::uint32_t, int>> bones;

	int get(std::string bone, ue4::components::u_skeletal_mesh_component* mesh, ue4::game_framework::a_pawn* pawn);
	std::vector<std::pair<int, int>> get_array(ue4::components::u_skeletal_mesh_component* mesh, ue4::game_framework::a_pawn* pawn);
}