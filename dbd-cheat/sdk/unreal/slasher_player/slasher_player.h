#pragma once

namespace sdk {
	struct a_slasher_player : sdk::a_pawn {
		std::pair<sdk::u_string, sdk::color> get_character_name() const;
		bool is_killer() const;
		bool is_trapper() const;
		bool is_hillbilly() const;
		bool is_huntress() const;
		bool is_myers() const;
		bool is_hag() const;
		bool is_doctor() const;
		bool is_leatherface() const;
		bool is_freddy() const;
		bool is_pig() const;
		bool is_clown() const;
		bool is_spirit() const;
		bool is_legion() const;
		bool is_plague() const;
		bool is_ghostface() const;
		bool is_oni() const;
		bool is_deathslinger() const;
		bool is_executioner() const;
		bool is_blight() const;
		bool is_twins() const;
		bool is_trickster() const;
		bool is_nemesis() const;
		bool is_pinhead() const;
		bool is_artist() const;
		bool is_wraith() const;
	};
}