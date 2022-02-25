#include <pch.h>

std::pair<sdk::u_string, sdk::color> sdk::a_camper_player::get_character_name() const {
	const auto color = sdk::color{ 255, 255, 255, 255 };

	if (this->is_dwight())
		return { L"dwight", color };

	if (this->is_meg())
		return { L"meg", color };

	if (this->is_claudette())
		return { L"claudette", color };

	if (this->is_jake())
		return { L"jake", color };

	if (this->is_nea())
		return { L"nea", color };

	if (this->is_bill())
		return { L"bill", color };

	if (this->is_laurie())
		return { L"laurie", color };

	if (this->is_ace())
		return { L"ace", color };

	if (this->is_feng())
		return { L"feng", color };

	if (this->is_quentin())
		return { L"quentin", color };

	if (this->is_tapp())
		return { L"tapp", color };

	if (this->is_kate())
		return { L"kate", color };

	if (this->is_adam())
		return { L"adam", color };

	if (this->is_jeff())
		return { L"jeff", color };

	if (this->is_jane())
		return { L"jane", color };

	if (this->is_ashley())
		return { L"ashley", color };

	if (this->is_yui())
		return { L"yui", color };

	if (this->is_zarina())
		return { L"zarina", color };

	if (this->is_cheryl())
		return { L"cheryl", color };

	if (this->is_felix())
		return { L"felix", color };

	if (this->is_elodie())
		return { L"elodie", color };

	if (this->is_yun())
		return { L"yun", color };

	if (this->is_jill())
		return { L"jill", color };

	if (this->is_leon())
		return { L"leon", color };

	if (this->is_mikaela())
		return { L"mikaela", color };

	if (this->is_jonah())
		return { L"jonah", color };

	if (this->is_david())
		return { L"david", color };

	if (this->is_nancy())
		return { L"nancy", color };

	return { L"", { 0, 0, 0, 0 } };
}


bool sdk::a_camper_player::is_survivor() const {
	if (this->is_dwight() || this->is_meg() || this->is_claudette() || this->is_jake() ||
		this->is_nea() || this->is_bill() || this->is_laurie() ||
		this->is_ace() || this->is_feng() || this->is_quentin() || this->is_tapp() ||
		this->is_kate() || this->is_adam() || this->is_jeff() || this->is_jane() ||
		this->is_ashley() || this->is_yui() || this->is_zarina() || this->is_cheryl() ||
		this->is_elodie() || this->is_yun() || this->is_jill() || this->is_leon() ||
		this->is_felix() || this->is_mikaela() || this->is_jonah() || this->is_david() ||
		this->is_nancy()) {

		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_dwight() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale01")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_meg() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale01")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_claudette() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale02")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_jake() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale02")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_nea() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale03")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_bill() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale04")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_laurie() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale04")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_ace() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale03")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_feng() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale05")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_quentin() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale06")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_tapp() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale07")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_kate() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale06")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_adam() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale08")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_jeff() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale09")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_jane() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale07")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_ashley() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale10")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_yui() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale09")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_zarina() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale10")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_cheryl() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale11")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_felix() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale12")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_elodie() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale12")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_yun() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale13")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_jill() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale14")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_leon() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale13")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_mikaela() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale15")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_jonah() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale14")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_david() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperMale05")) {
		return true;
	}

	return false;
}

bool sdk::a_camper_player::is_nancy() const {
	const auto name = this->get_name();

	if (name.contains("BP_CamperFemale08")) {
		return true;
	}

	return false;
}

void sdk::a_camper_player::disable_skillchecks() {
	const auto flags = sdk::disable_skillchecks->flags;
	sdk::disable_skillchecks->flags |= 0x00000400;

	sdk::process_event(this, sdk::disable_skillchecks, nullptr);
	sdk::disable_skillchecks->flags = flags;
}