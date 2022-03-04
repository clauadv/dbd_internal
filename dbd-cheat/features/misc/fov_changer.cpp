#include <pch.h>
#include "../features.h"

void misc::fov_changer::run(sdk::u_player* local_player) {
	if (variables::misc::fov_changer) {
		local_player->aspect_ratio_axis = sdk::e_aspect_ratio_axis::maintain_y_fov;
	} else {
		local_player->aspect_ratio_axis = sdk::e_aspect_ratio_axis::maintain_x_fov;
	}
}