#include <includes.h>

bool ue4::game_framework::a_player_controller::world_to_screen(const ue4::math::vector& world, ue4::math::vector_2d& screen) {
	struct {
		ue4::math::vector world;
		ue4::math::vector_2d screen;
		bool player_viewport_relative;
		bool return_value;
	} params{};

	params.world = world;
	params.screen = screen;
	params.player_viewport_relative = false;

	ue4::sdk::process_event(this, ue4::sdk::world_to_screen, &params);

	screen = params.screen;

	return params.return_value;
}