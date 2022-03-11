#include <pch.h>

std::pair<sdk::u_string, sdk::color> sdk::a_slasher_player::get_character_name() const {
	const auto color = sdk::color{ 255, 0, 0, 255 };

	if (this->is_trapper())
		return { L"trapper", color };

	if (this->is_hillbilly())
		return { L"hilbilly", color };

	if (this->is_huntress())
		return { L"huntress", color };

	if (this->is_myers())
		return { L"myers", color };

	if (this->is_hag())
		return { L"hag", color };

	if (this->is_doctor())
		return { L"doctor", color };

	if (this->is_leatherface())
		return { L"leatherface", color };

	if (this->is_freddy())
		return { L"freddy", color };

	if (this->is_pig())
		return { L"pig", color };

	if (this->is_clown())
		return { L"clown", color };

	if (this->is_spirit())
		return { L"spirit", color };

	if (this->is_legion())
		return { L"legion", color };

	if (this->is_plague())
		return { L"plague", color };

	if (this->is_ghostface())
		return { L"ghostface", color };

	if (this->is_oni())
		return { L"oni", color };

	if (this->is_deathslinger())
		return { L"deathslinger", color };

	if (this->is_executioner())
		return { L"executioner", color };

	if (this->is_blight())
		return { L"blight", color };

	if (this->is_twins())
		return { L"twins", color };

	if (this->is_trickster())
		return { L"trickster", color };

	if (this->is_nemesis())
		return { L"nemesis", color };

	if (this->is_pinhead())
		return { L"pinhead", color };

	if (this->is_artist())
		return { L"artist", color };

	if (this->is_wraith())
		return { L"wraith", color };

	if (this->is_nurse())
		return { L"nurse", color };

	if (this->is_demogorgon())
		return { L"demogorgon", color };

	if (this->is_victor())
		return { L"victor", color };

	return { L"", { 0, 0, 0, 0 } };
}

bool sdk::a_slasher_player::is_killer() const {
	if (this->is_trapper() || this->is_hillbilly() || this->is_huntress() || this->is_myers() ||
		this->is_hag() || this->is_doctor() || this->is_leatherface() || this->is_freddy() ||
		this->is_pig() || this->is_clown() || this->is_spirit() || this->is_legion() ||
		this->is_plague() || this->is_ghostface() || this->is_oni() || this->is_deathslinger() ||
		this->is_executioner() || this->is_blight() || this->is_twins() || this->is_trickster() ||
		this->is_nemesis() || this->is_pinhead() || this->is_artist() || this->is_wraith() ||
		this->is_nurse() || this->is_demogorgon() || this->is_victor()) {

		// to add:
		//  - onryo

		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_trapper() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_01")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_hillbilly() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_03")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_huntress() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_08")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_myers() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_06")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_hag() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_05")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_doctor() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_07")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_leatherface() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_09")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_freddy() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_10")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_pig() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_11")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_clown() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_12")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_spirit() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_13")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_legion() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_14")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_plague() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_15")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_ghostface() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_16")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_oni() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_18")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_deathslinger() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_19")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_executioner() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_20")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_blight() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_21")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_twins() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_22")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_trickster() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_23")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_nemesis() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_24")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_pinhead() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_25")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_artist() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_26")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_wraith() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_02")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_nurse() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_04")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_demogorgon() const {
	const auto name = this->get_name();

	if (name.contains("BP_Slasher_Character_17")) {
		return true;
	}

	return false;
}

bool sdk::a_slasher_player::is_victor() const {
	const auto name = this->get_name();

	// todo
	// BP_ConjoinedTwin_C_2147478302
	// BP_ConjoinedTwinInteractable_C_2147478286

	if (name.contains("twin")) {
		return true;
	}

	return false;
}