#include <includes.h>

ue4::math::vector ue4::game_framework::a_actor::get_location() {
	struct {
		ue4::math::vector return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::get_actor_location, &params);

	return params.return_value;
}

ue4::math::rotator ue4::game_framework::a_actor::get_rotation() {
	struct {
		ue4::math::rotator return_value;
	} params{};

	const auto flags = ue4::sdk::get_actor_rotation->flags;
	ue4::sdk::get_actor_rotation->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::get_actor_rotation, &params);
	ue4::sdk::get_actor_rotation->flags = flags;

	return params.return_value;
}

void ue4::game_framework::a_actor::get_bounds(const bool only_colliding_components, ue4::math::vector* origin, ue4::math::vector* extent) {
	struct {
		bool only_colliding_components;
		ue4::math::vector origin;
		ue4::math::vector extent;
	} params{};

	params.only_colliding_components = only_colliding_components;

	ue4::sdk::process_event(this, ue4::sdk::get_actor_bounds, &params);

	if (origin != nullptr)
		*origin = params.origin;

	if (extent != nullptr)
		*extent = params.extent;
}

float ue4::game_framework::a_actor::get_distance_to(ue4::game_framework::a_actor* actor) {
	struct {
		ue4::game_framework::a_actor* actor;
		float return_value;
	} params{};

	params.actor = actor;

	ue4::sdk::process_event(this, ue4::sdk::get_distance_to, &params);

	return params.return_value;
}

std::wstring ue4::game_framework::a_actor::get_distance_to_string(ue4::game_framework::a_actor* actor) {
	const auto distance = this->get_distance_to(actor);
	const auto meters = distance * 0.01f;

	std::wstringstream ss;
	if (meters < 1000.f) {
		ss << std::fixed << std::setprecision(0) << meters << _("m");

	} else {
		ss.precision(3);
		ss << std::fixed << std::setprecision(0) << (meters / 1000.f) << _("km");
	}

	return ss.str();
}

void ue4::game_framework::a_actor::enable_input(ue4::game_framework::a_player_controller* player_controller) {
	struct {
		ue4::game_framework::a_player_controller* player_controller;
	} params{};

	params.player_controller = player_controller;

	const auto flags = ue4::sdk::enable_input->flags;
	ue4::sdk::enable_input->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::enable_input, &params);
	ue4::sdk::enable_input->flags = flags;
}

void ue4::game_framework::a_actor::disable_input(ue4::game_framework::a_player_controller* player_controller) {
	struct {
		ue4::game_framework::a_player_controller* player_controller;
	} params{};

	params.player_controller = player_controller;

	const auto flags = ue4::sdk::disable_input->flags;
	ue4::sdk::disable_input->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::disable_input, &params);
	ue4::sdk::disable_input->flags = flags;
}

std::tuple<ue4::containers::f_string, ue4::math::color, float> ue4::game_framework::a_actor::get_actor_name(ue4::game_framework::a_pawn* my_player, std::wstring distance) {

	if (this->is_a(ue4::sdk::generator) && variables::entities::generator) {

		const auto generator = reinterpret_cast<dbd::generator::a_generator*>(this);
		if (generator->is_repaired) return {};
		
		const auto color = ue4::math::color{
			variables::entities::generator_color[0],
			variables::entities::generator_color[1],
			variables::entities::generator_color[2],
			variables::entities::generator_color[3]
		};

		std::wstring text;

		if (generator->is_blocked) {
			text.append(_(L"generator")).append(_(L" - blocked")).append(_(L" [")).append(distance).append(_(L"]"));

		} else {
			text.append(_(L"generator")).append(_(L" - ")).append(generator->get_repair_percent()).append(_(L"% [")).append(distance).append(_(L"]"));
		}

		return { text.c_str(), color, variables::entities::max_distance };
	}

	if (this->is_a(ue4::sdk::searchable) && variables::entities::searchable) {
		const auto searchable = reinterpret_cast<dbd::searchable::a_searchable*>(this);
		if (searchable->has_been_searched) return {};

		const auto color = ue4::math::color{
			variables::entities::searchable_color[0],
			variables::entities::searchable_color[1],
			variables::entities::searchable_color[2],
			variables::entities::searchable_color[3]
		};

		std::wstring text;
		text.append(_(L"searchable [")).append(distance).append(_(L"]"));

		return { text.c_str(), color, variables::entities::max_distance};
	}

	if (this->is_a(ue4::sdk::escape_door) && variables::entities::escape_door) {
		const auto escape_door = reinterpret_cast<dbd::escape_door::a_escape_door*>(this);
		if (!escape_door->activated) return {};

		const auto color = ue4::math::color{
			variables::entities::escape_door_color[0],
			variables::entities::escape_door_color[1],
			variables::entities::escape_door_color[2],
			variables::entities::escape_door_color[3]
		};

		std::wstring text;

		if (escape_door->is_opened()) {
			text.append(_(L"escape door")).append(_(L" - opened")).append(_(L" [")).append(distance).append(_(L"]"));

		} else {
			text.append(_(L"escape door [")).append(distance).append(_(L"]"));
		}

		return { text.c_str(), color, variables::entities::max_distance };
	}

	if (this->is_a(ue4::sdk::hatch) && variables::entities::hatch) {
		const auto hatch = reinterpret_cast<dbd::hatch::a_hatch*>(this);
		
		const auto color = ue4::math::color{
			variables::entities::hatch_color[0],
			variables::entities::hatch_color[1],
			variables::entities::hatch_color[2],
			variables::entities::hatch_color[3]
		};

		std::wstring text;

		if (hatch->state == dbd::hatch::hatch_state::hidden) {
			text.append(_(L"hatch")).append(_(L" - hidden")).append(_(L" [")).append(distance).append(_(L"]"));

		} else if (hatch->state == dbd::hatch::hatch_state::default_close || hatch->state == dbd::hatch::hatch_state::forced_close) {
			text.append(_(L"hatch")).append(_(L" - closed")).append(_(L" [")).append(distance).append(_(L"]"));

		} else if (hatch->state == dbd::hatch::hatch_state::opened) {
			text.append(_(L"hatch")).append(_(L" - opened")).append(_(L" [")).append(distance).append(_(L"]"));
		}

		return { text.c_str(), color, variables::entities::max_distance };
	}

	if (this->is_a(ue4::sdk::locker) && variables::entities::locker) {
		const auto locker = reinterpret_cast<dbd::locker::a_locker*>(this);

		const auto color = ue4::math::color{
			variables::entities::locker_color[0],
			variables::entities::locker_color[1],
			variables::entities::locker_color[2],
			variables::entities::locker_color[3]
		};

		std::wstring text;

		if (locker->prevent_all_interactions) {
			text.append(_(L"locker")).append(_(L" - locked")).append(_(L" [")).append(distance).append(_(L"]"));

		} else {
			text.append(_(L"locker [")).append(distance).append(_(L"]"));
		}

		return { text.c_str(), color, variables::entities::max_distance };
	}

	if (this->is_a(ue4::sdk::pallet) && variables::entities::pallet) {
		const auto pallet = reinterpret_cast<dbd::pallet::a_pallet*>(this);
		if (pallet->state == dbd::pallet::pallet_state::destroyed) return {};

		const auto color = ue4::math::color{
			variables::entities::pallet_color[0],
			variables::entities::pallet_color[1],
			variables::entities::pallet_color[2],
			variables::entities::pallet_color[3]
		};

		std::wstring text;

		if (pallet->state == dbd::pallet::pallet_state::fallen) {
			text.append(_(L"pallet")).append(_(L" - fallen")).append(_(L" [")).append(distance).append(_(L"]"));

		} else if (pallet->state == dbd::pallet::pallet_state::illusionary) {
			text.append(_(L"pallet")).append(_(L" - illusionary")).append(_(L" [")).append(distance).append(_(L"]"));

		} else {
			text.append(_(L"pallet [")).append(distance).append(_(L"]"));
		}

		return { text.c_str(), color, variables::entities::max_distance };
	}

	if (this->is_a(ue4::sdk::window) && variables::entities::window) {
		const auto window = reinterpret_cast<dbd::window::a_window*>(this);

		const auto color = ue4::math::color{
			variables::entities::window_color[0],
			variables::entities::window_color[1],
			variables::entities::window_color[2],
			variables::entities::window_color[3]
		};

		std::wstring text;

		if (window->is_blocked(my_player)) {
			text.append(_(L"window")).append(_(L" - blocked")).append(_(L" [")).append(distance).append(_(L"]"));

		} else {
			text.append(_(L"window [")).append(distance).append(_(L"]"));
		}

		return { text.c_str(), color, variables::entities::max_distance };
	}

	if (this->is_a(ue4::sdk::totem) && variables::entities::totem) {
		const auto totem = reinterpret_cast<dbd::totem::a_totem*>(this);
		if (totem->state == dbd::totem::totem_state::cleansed) return {};

		const auto color = ue4::math::color{
			variables::entities::totem_color[0],
			variables::entities::totem_color[1],
			variables::entities::totem_color[2],
			variables::entities::totem_color[3]
		};

		std::wstring text;

		for (int i = 0; i < totem->bound_perks.size(); i++) {
			const auto name = totem->get_perk_name(reinterpret_cast<ue4::game_framework::a_actor*>(totem->bound_perks[i])->get_name());

			if (totem->state == dbd::totem::totem_state::hex) {
				text.append(name).append(_(L" - hex")).append(_(L" [")).append(distance).append(_(L"] \n"));

			} else if (totem->state == dbd::totem::totem_state::boon) {
				text.append(name).append(_(L" - boon")).append(_(L" [")).append(distance).append(_(L"] \n"));
			}
		}

		if (!totem->bound_perks.size()) {
			text.append(_(L"totem")).append(_(L" [")).append(distance).append(_(L"]"));
		}

		return { text.c_str(), color, variables::entities::max_distance };
	}

	if (this->is_a(ue4::sdk::zombie) && variables::entities::zombie) {
		const auto color = ue4::math::color{
			variables::entities::zombie_color[0],
			variables::entities::zombie_color[1],
			variables::entities::zombie_color[2],
			variables::entities::zombie_color[3]
		};

		std::wstring text;
		text.append(_(L"zombie")).append(_(L" [")).append(distance).append(_(L"]"));

		return { text.c_str(), color, variables::entities::max_distance };
	}

	return { L"", { 0.f, 0.f, 0.f, 0.f }, 0.f };
}