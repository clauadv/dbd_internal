#include <includes.h>
#include "hooks/hooks.h"

void initialize(const HMODULE module) {
	try {
		utils::console::initialize(_("dbd_internal"));
		ue4::sdk::initialize();
		hooks::initialize();
	}

	catch (const std::runtime_error& error) {
		LI_FN(MessageBoxA)(nullptr, error.what(), _("dbd_internal"), MB_OK | MB_ICONERROR);
		LI_FN(FreeLibraryAndExitThread)(module, 0);
	}

	while (!LI_FN(GetAsyncKeyState)(VK_END)) {
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}

	LI_FN(FreeLibraryAndExitThread)(module, 0);
}

bool DllMain(const HMODULE module, const std::uint32_t call_reason, void* reserved [[maybe_unused]] ) {
	LI_FN(DisableThreadLibraryCalls)(module);

	switch (call_reason) {
		case DLL_PROCESS_ATTACH:
			if (const auto handle = LI_FN(CreateThread)(nullptr, NULL, reinterpret_cast<unsigned long(__stdcall*)(void*)>(initialize), module, NULL, nullptr)) {
				LI_FN(CloseHandle)(handle);
			}
			break;
		case DLL_PROCESS_DETACH:
			hooks::release();
			break;
		default:
			break;
	}

	return true;
}