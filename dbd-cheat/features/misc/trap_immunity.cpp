#include <pch.h>
#include "../features.h"

void misc::trap_immunity::run(sdk::a_camper_player* my_camper) {
	if (!variables::misc::trap_immunity) return;

	my_camper->trap_immunity();
}