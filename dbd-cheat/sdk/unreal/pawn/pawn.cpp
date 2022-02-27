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

sdk::u_player_interaction* sdk::a_pawn::get_player_interaction() {
	struct {
		sdk::u_player_interaction* return_value;
	} params{};

	const auto flags = sdk::get_player_interaction->flags;
	sdk::get_player_interaction->flags |= 0x00000400;

	sdk::process_event(this, sdk::get_player_interaction, &params);
	sdk::get_player_interaction->flags = flags;

	return params.return_value;
}