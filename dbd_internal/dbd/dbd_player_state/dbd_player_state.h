#pragma once

namespace dbd::dbd_player_state {
	enum class player_state {
		active,
		dead,
		escaped,
		escaped_injured,
		sacrificed,
		none,
		disconnected,
		manually_left_match
	};

	class a_dbd_player_state : public ue4::game_framework::a_player_state {
	public:
		dbd::dbd_player_state::player_state get_player_game_state();
	};
}