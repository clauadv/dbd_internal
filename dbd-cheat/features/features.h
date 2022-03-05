#pragma once
#include "../render/render.h"
#include "../menu/variables.h"

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
	void snapline(const sdk::vector_2d& root);
}

namespace visuals::survivor {
	inline std::once_flag flag;
	inline std::int8_t latency;
	void run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller);
	void name(const sdk::vector_2d& root, sdk::a_pawn* my_player, sdk::a_camper_player* camper, const sdk::a_player_state* state);
	void skeleton(const sdk::a_camper_player* camper, sdk::a_player_controller* player_controller, sdk::u_skeletal_mesh_component* mesh);
	void snapline(const sdk::vector_2d& root);
}

namespace visuals::entities {
	void run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller);

	namespace generator {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}

	namespace pallet {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}

	namespace chest {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}

	namespace door {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}

	namespace window {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}

	namespace totem {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}

	namespace hatch {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}

	namespace trap {
		void name(sdk::a_actor* actor, const std::wstring& distance, sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player);
	}
}

namespace visuals::watermark {
	void draw();
}

namespace misc::fly {
	void run(sdk::a_camper_player* my_camper);
}

namespace misc::trap_immunity {
	void run(sdk::a_camper_player* my_camper);
}

namespace misc::auto_skillcheck {
	void run(sdk::a_camper_player* my_camper);
}

namespace misc::fov_changer {
	void run(sdk::u_player* local_player);
}

namespace misc::immobilize {
	void run(sdk::a_camper_player* my_camper);
}