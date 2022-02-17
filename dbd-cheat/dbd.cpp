#include <pch.h>
#include "hooks/hooks.h"
#include "utils/utils.h"

bool DllMain(const HMODULE module, const std::uint32_t call_reason, void* reserved [[maybe_unused]] ) {
	if (call_reason != DLL_PROCESS_ATTACH) {
		return false;
	}

	// utils::console::initialize("dbd-cheat");
	sdk::initialize();

	return true;
}