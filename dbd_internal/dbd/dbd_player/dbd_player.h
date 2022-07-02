#pragma once

namespace dbd::dbd_player {
	enum class player_team {
		none,
		killer,
		survivor
	};

	enum class state_type {
		none,
		hooked,
		trapped,
		hiding,
		dead,
		caged
	};

	class a_dbd_player : public ue4::game_framework::a_pawn {
	public:
		dbd::dbd_player_state::a_dbd_player_state* get_dbd_player_state();
		dbd::dbd_player::player_team get_player_team();
		ue4::math::color get_player_color(dbd::dbd_player::player_team player_team);
		dbd::player_interaction::u_player_interaction* get_player_interaction();
		void set_state(dbd::dbd_player::state_type state);
		bool is_carried();
		void trap_immunity();
	};
}