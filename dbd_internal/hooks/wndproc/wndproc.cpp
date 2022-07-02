#include <includes.h>
#include "../hooks.h"

std::int64_t __stdcall hooks::wndproc::hook(const HWND hwnd, const unsigned int message, const WPARAM wparam, const LPARAM lparam) {
	if (message == WM_KEYDOWN && wparam == VK_INSERT) {
		variables::menu::opened = !variables::menu::opened;
	}

	std::int64_t ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	ImGui_ImplWin32_WndProcHandler(window, message, wparam, lparam);

	return CallWindowProcA(wndproc::original, hwnd, message, wparam, lparam);
}