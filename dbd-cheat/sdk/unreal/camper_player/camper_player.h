#pragma once

namespace sdk {
	struct a_camper_player : sdk::a_pawn {
		std::pair<sdk::u_string, sdk::color> get_character_name() const;
		bool is_survivor() const;
		bool is_dwight() const;
		bool is_meg() const;
		bool is_claudette() const;
		bool is_jake() const;
		bool is_nea() const;
		bool is_bill() const;
		bool is_laurie() const;
		bool is_ace() const;
		bool is_feng() const;
		bool is_quentin() const;
		bool is_tapp() const;
		bool is_kate() const;
		bool is_adam() const;
		bool is_jeff() const;
		bool is_jane() const;
		bool is_ashley() const;
		bool is_yui() const;
		bool is_zarina() const;
		bool is_cheryl() const;
		bool is_felix() const;
		bool is_elodie() const;
		bool is_yun() const;
		bool is_jill() const;
		bool is_leon() const;
		bool is_mikaela() const;
		bool is_jonah() const;
		bool is_david() const;
		bool is_nancy() const;
		sdk::a_player_state* get_dbd_player_state();
		void trap_immunity();
		bool is_carried();
	};
}