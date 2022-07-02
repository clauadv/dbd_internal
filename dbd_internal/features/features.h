#pragma once

namespace features {
	void run(const ue4::engine::u_world* world, ue4::game_framework::a_pawn* my_player, ue4::game_framework::a_player_controller* player_controller);
}

namespace features::esp::players {
	inline std::int8_t latency;
	void draw(ue4::game_framework::a_pawn* pawn, ue4::game_framework::a_pawn* my_player, ue4::components::u_skeletal_mesh_component* mesh, ue4::game_framework::a_player_controller* player_controller);
}

namespace features::esp::entities {
	void draw(ue4::game_framework::a_actor* actor, ue4::game_framework::a_pawn* my_player, ue4::game_framework::a_player_controller* player_controller);
}

namespace features::misc::auto_skillcheck {
	void run(ue4::game_framework::a_pawn* my_player);
}

namespace features::misc::speed_hack {
	void run(ue4::game_framework::a_pawn* my_player, ue4::game_framework::a_player_controller* player_controller);
}

namespace features::misc::set_state {
	void run(ue4::game_framework::a_pawn* my_player);
}

namespace features::misc::trap_immunity {
	void run(ue4::game_framework::a_pawn* my_player);
}

namespace features::misc::watermark {
	void draw();
}