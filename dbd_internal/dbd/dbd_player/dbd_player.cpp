#include <includes.h>

dbd::dbd_player_state::a_dbd_player_state* dbd::dbd_player::a_dbd_player::get_dbd_player_state() {
	struct {
		dbd::dbd_player_state::a_dbd_player_state* return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::get_dbd_player_state, &params);

	return params.return_value;
}

dbd::dbd_player::player_team dbd::dbd_player::a_dbd_player::get_player_team() {
	struct {
		dbd::dbd_player::player_team return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::get_player_team, &params);

	return params.return_value;
}

ue4::math::color dbd::dbd_player::a_dbd_player::get_player_color(dbd::dbd_player::player_team player_team) {
	auto color = ue4::math::color{ 1.f, 1.f, 1.f, 1.f };

	if (player_team == dbd::dbd_player::player_team::killer) {
		color = ue4::math::color{
			variables::players::killer_color[0],
			variables::players::killer_color[1],
			variables::players::killer_color[2],
			variables::players::killer_color[3]
		};

	} else if (player_team == dbd::dbd_player::player_team::survivor) {
		color = ue4::math::color{
			variables::players::survivor_color[0],
			variables::players::survivor_color[1],
			variables::players::survivor_color[2],
			variables::players::survivor_color[3]
		};
	}

	return color;
}

dbd::player_interaction::u_player_interaction* dbd::dbd_player::a_dbd_player::get_player_interaction() {
	struct {
		dbd::player_interaction::u_player_interaction* return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::get_player_interaction, &params);

	return params.return_value;
}

void dbd::dbd_player::a_dbd_player::set_state(dbd::dbd_player::state_type type) {
	struct {
		dbd::dbd_player::state_type type;
	} params{};

	params.type = type;

	const auto flags = ue4::sdk::set_state->flags;
	ue4::sdk::set_state->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::set_state, &params);
	ue4::sdk::set_state->flags = flags;
}

bool dbd::dbd_player::a_dbd_player::is_carried() {
	struct {
		bool return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::is_carried, &params);

	return params.return_value;
}

void dbd::dbd_player::a_dbd_player::trap_immunity() {
	struct {
		float duration;
	} params{};

	const auto flags = ue4::sdk::trap_immunity->flags;
	ue4::sdk::trap_immunity->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::trap_immunity, &params);
	ue4::sdk::trap_immunity->flags = flags;
}