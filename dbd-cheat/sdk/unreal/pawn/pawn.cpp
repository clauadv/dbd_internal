#include <pch.h>

void sdk::a_pawn::launch_character(const sdk::vector& velocity, const bool xy_override, const bool z_override) {
	struct {
		sdk::vector velocity;
		bool xy_override;
		bool z_override;
	} params{};

	params.velocity = velocity;
	params.xy_override = xy_override;
	params.z_override = z_override;

	const auto flags = sdk::launch_character->flags;
	sdk::launch_character->flags |= 0x00000400;

	sdk::process_event(this, sdk::launch_character, &params);
	sdk::launch_character->flags = flags;
}