#include <includes.h>

ue4::math::vector ue4::game_framework::a_player_camera_manager::get_camera_rotation() {
	struct {
		ue4::math::vector return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::get_camera_rotation, &params);

	return params.return_value;
}