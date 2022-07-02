#include <includes.h>

std::wstring dbd::totem::a_totem::get_perk_name(std::string name) {
	if (name.contains(_("BP_HexBloodFavor_C")))
		return _(L"blood favour");

	if (name.contains(_("BP_HexCrowdControl_C")))
		return _(L"crowd control");

	if (name.contains(_("Hex_DevourHope_C")))
		return _(L"devour hope");

	if (name.contains(_("Hex_HauntedGround_C")))
		return _(L"haunted ground");

	if (name.contains(_("Hex_HuntressLullaby_C")))
		return _(L"huntress lullaby");

	if (name.contains(_("Hex_NoOneEscapesDeath_C")))
		return _(L"noed");

	if (name.contains(_("HexRetribution_C")))
		return _(L"retribution");

	if (name.contains(_("Hex_Ruin_C")))
		return _(L"ruin");

	if (name.contains(_("Hex_TheThirdSeal_C")))
		return _(L"the third seal");

	if (name.contains(_("Hex_ThrillOfTheHunt_C")))
		return _(L"thrill of the hunt");

	if (name.contains(_("BP_HexUndying_C")))
		return _(L"undying");

	if (name.contains(_("BP_HexPentimento_C")))
		return _(L"pentimento");

	if (name.contains(_("BP_S28P02_C")))
		return _(L"circle of healing");

	if (name.contains(_("BP_S30P03_C")))
		return _(L"dark theory");

	if (name.contains(_("BP_S29P03_C")))
		return _(L"exponential");

	if (name.contains(_("BP_S28P03_C")))
		return _(L"shadow step");

	return std::wstring(name.begin(), name.end());
}