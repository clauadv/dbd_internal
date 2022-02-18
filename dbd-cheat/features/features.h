#pragma once
#include "../render/render.h"

namespace sdk {
	struct a_player_controller;
	struct u_world;
	struct a_pawn;
	struct vector_2d;
	struct a_actor;
	struct u_skeletal_mesh_component;
}

namespace visuals::killer {
	inline std::once_flag flag;
	void run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller);
	void name(const sdk::vector_2d& root, sdk::a_pawn* my_player, sdk::a_slasher_player* slasher);
	void skeleton(const sdk::a_slasher_player* slasher, sdk::a_player_controller* player_controller, sdk::u_skeletal_mesh_component* mesh);
}

namespace visuals::survivor {
	inline std::once_flag flag;
	void run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller);
	void name(const sdk::vector_2d& root, sdk::a_pawn* my_player, sdk::a_camper_player* camper);
	void skeleton(const sdk::a_camper_player* camper, sdk::a_player_controller* player_controller, sdk::u_skeletal_mesh_component* mesh);
}

namespace visuals::entities {
	void run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller);

	namespace generator {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller);
	}

	namespace pallet {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller);
	}

	namespace chest {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller);
	}
}