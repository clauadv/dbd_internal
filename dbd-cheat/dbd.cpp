#include <thread>
#include "sdk/sdk.h"

bool DllMain(const HMODULE module [[maybe_unused]], const std::uint32_t call_reason, void* reserved [[maybe_unused]] ) {
	if (call_reason != DLL_PROCESS_ATTACH)
		return false;

	if (!sdk::init()) return false;

	return true;
}