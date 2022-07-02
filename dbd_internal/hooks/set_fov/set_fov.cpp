#include <includes.h>
#include "../hooks.h"

std::int64_t __fastcall hooks::set_fov::hook(float* rcx) {
	if (variables::misc::fov_changer) {
		rcx[0x94] = variables::misc::fov_value;
	}

	return hooks::set_fov::original(rcx);
}