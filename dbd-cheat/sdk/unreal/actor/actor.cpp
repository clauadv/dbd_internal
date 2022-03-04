#include <pch.h>

sdk::vector sdk::a_actor::get_location() {
	struct {
		sdk::vector return_value;
	} params{};

	sdk::process_event(this, sdk::get_actor_location, &params);

	return params.return_value;
}

sdk::rotator sdk::a_actor::get_rotation() {
	struct {
		sdk::rotator return_value;
	} params{};

	const auto flags = sdk::get_actor_rotation->flags;
	sdk::get_actor_rotation->flags |= 0x00000400;

	sdk::process_event(this, sdk::get_actor_rotation, &params);
	sdk::get_actor_rotation->flags = flags;

	return params.return_value;
}

void sdk::a_actor::get_bounds(const bool only_colliding_components, sdk::vector* origin, sdk::vector* extent) {
	struct {
		bool only_colliding_components;
		sdk::vector origin;
		sdk::vector extent;
	} params{};

	params.only_colliding_components = only_colliding_components;

	sdk::process_event(this, sdk::get_actor_bounds, &params);

	if (origin != nullptr)
		*origin = params.origin;

	if (extent != nullptr)
		*extent = params.extent;
}

float sdk::a_actor::get_distance_to(sdk::a_actor* actor) {
	struct {
		sdk::a_actor* actor;
		float return_value;
	} params{};

	params.actor = actor;

	sdk::process_event(this, sdk::get_distance_to, &params);

	return params.return_value;
}

void sdk::a_actor::enable_input(sdk::a_player_controller* player_controller) {
	struct {
		sdk::a_player_controller* player_controller;
	} params{};

	params.player_controller = player_controller;

	const auto flags = sdk::enable_input->flags;
	sdk::enable_input->flags |= 0x00000400;

	sdk::process_event(this, sdk::enable_input, &params);
	sdk::enable_input->flags = flags;
}

void sdk::a_actor::disable_input(sdk::a_player_controller* player_controller) {
	struct {
		sdk::a_player_controller* player_controller;
	} params{};

	params.player_controller = player_controller;

	const auto flags = sdk::disable_input->flags;
	sdk::disable_input->flags |= 0x00000400;

	sdk::process_event(this, sdk::disable_input, &params);
	sdk::disable_input->flags = flags;
}

std::wstring sdk::a_actor::get_distance_to_string(sdk::a_actor* actor) {
	const auto distance = this->get_distance_to(actor);
	const auto meters = distance * 0.01f;

	std::wstringstream ss;
	if (meters < 1000.f) {
		ss << std::fixed << std::setprecision(0) << meters << "m";

	} else {
		ss.precision(3);
		ss << std::fixed << std::setprecision(0) << (meters / 1000.f) << "km";
	}

	return ss.str();
}