#include "d3d11.h"

bool d3d11::initialize() {
	WNDCLASSEX window_class{};
	window_class.cbSize = sizeof(WNDCLASSEX);
	window_class.style = CS_HREDRAW | CS_VREDRAW;
	window_class.lpfnWndProc = DefWindowProcA;
	window_class.cbClsExtra = 0;
	window_class.cbWndExtra = 0;
	window_class.hInstance = GetModuleHandleA(nullptr);
	window_class.hIcon = nullptr;
	window_class.hCursor = nullptr;
	window_class.hbrBackground = nullptr;
	window_class.lpszMenuName = nullptr;
	window_class.lpszClassName = "d3d11";
	window_class.hIconSm = nullptr;

	LI_FN(RegisterClassExA)(&window_class);

	const auto window = LI_FN(CreateWindowExA)(0l, window_class.lpszClassName, "dx11_window", WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, nullptr, nullptr, window_class.hInstance, nullptr);

	const auto d3d11_lib = LI_FN(GetModuleHandleA)("d3d11.dll");
	if (d3d11_lib == nullptr) {
		LI_FN(DestroyWindow)(window);
		LI_FN(UnregisterClassA)(window_class.lpszClassName, window_class.hInstance);

		return false;
	}

	void* create_device_and_swap_chain = LI_FN(GetProcAddress)(d3d11_lib, "D3D11CreateDeviceAndSwapChain");
	if (create_device_and_swap_chain == nullptr) {
		LI_FN(DestroyWindow)(window);
		LI_FN(UnregisterClassA)(window_class.lpszClassName, window_class.hInstance);

		return false;
	}

	D3D_FEATURE_LEVEL feature_level;
	constexpr D3D_FEATURE_LEVEL feature_levels[] = { D3D_FEATURE_LEVEL_10_1, D3D_FEATURE_LEVEL_11_0 };

	DXGI_RATIONAL refresh_rate{};
	refresh_rate.Numerator = 60;
	refresh_rate.Denominator = 1;

	DXGI_MODE_DESC buffer_desc{};
	buffer_desc.Width = 100;
	buffer_desc.Height = 100;
	buffer_desc.RefreshRate = refresh_rate;
	buffer_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	buffer_desc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	buffer_desc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;

	DXGI_SAMPLE_DESC sample_desc{};
	sample_desc.Count = 1;
	sample_desc.Quality = 0;

	DXGI_SWAP_CHAIN_DESC swap_chain_desc{};
	swap_chain_desc.BufferDesc = buffer_desc;
	swap_chain_desc.SampleDesc = sample_desc;
	swap_chain_desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	swap_chain_desc.BufferCount = 1;
	swap_chain_desc.OutputWindow = window;
	swap_chain_desc.Windowed = 1;
	swap_chain_desc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
	swap_chain_desc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

	IDXGISwapChain* swap_chain;
	ID3D11Device* device;
	ID3D11DeviceContext* context;

	if (LI_FN(D3D11CreateDeviceAndSwapChain).get()(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, feature_levels, 2, D3D11_SDK_VERSION, &swap_chain_desc, &swap_chain, &device, &feature_level, &context) < 0) {
		LI_FN(DestroyWindow)(window);
		LI_FN(UnregisterClassA)(window_class.lpszClassName, window_class.hInstance);
		return false;
	}

	methods_table = static_cast<std::uint64_t*>(calloc(205, sizeof(std::uint64_t)));
	if (methods_table != nullptr) {
		memcpy(methods_table, *reinterpret_cast<std::uint64_t**>(swap_chain), 18 * sizeof(std::uint64_t));
		memcpy(methods_table + 18, *reinterpret_cast<std::uint64_t**>(device), 43 * sizeof(std::uint64_t));
		memcpy(methods_table + 18 + 43, *reinterpret_cast<std::uint64_t**>(context), 144 * sizeof(std::uint64_t));
	}

	swap_chain->Release();
	swap_chain = nullptr;

	device->Release();
	device = nullptr;

	context->Release();
	context = nullptr;

	LI_FN(DestroyWindow)(window);
	LI_FN(UnregisterClassA)(window_class.lpszClassName, window_class.hInstance);

	return true;
}

unsigned long long d3d11::get_present() {
	return methods_table[8];
}