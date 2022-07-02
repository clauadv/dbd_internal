#include <includes.h>
#include "hooks/hooks.h"

bool menu::initialize() {
	ImGui::CreateContext();
	ImGui_ImplWin32_Init(hooks::window);
	ImGui_ImplDX11_Init(d3d11::device, d3d11::context);

	auto& io = ImGui::GetIO();
	io.IniFilename = nullptr;
	io.LogFilename = nullptr;
	io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;

	ImGui::StyleColorsDark();

	auto& style = ImGui::GetStyle();
	style.ScrollbarSize = 13.0f;
	style.WindowTitleAlign = ImVec2{ 0.5f, 0.5f };
	style.WindowRounding = 6.f;

	return true;
}

void menu::handle_input(ue4::game_framework::a_pawn* my_player, ue4::game_framework::a_player_controller* player_controller) {
	if (variables::menu::opened) {
		my_player->disable_input(player_controller);
	} else {
		my_player->enable_input(player_controller);
	}
}

void menu::render() {
	auto& style = ImGui::GetStyle();
	auto& io = ImGui::GetIO();
	io.MouseDrawCursor = variables::menu::opened;

	static float alpha = 0.f;

	const auto& draw_list = ImGui::GetBackgroundDrawList();
	draw_list->AddRectFilled(ImVec2{ 0.f, 0.f }, io.DisplaySize, ImColor{ 0.f, 0.f, 0.f, alpha });

	if (!variables::menu::opened) {
		alpha = std::fmax(alpha - io.DeltaTime * 3.0f, 0.f);
		style.Alpha = std::fmax(style.Alpha - io.DeltaTime * 6.0f, 0.f);
		return;
	}

	alpha = std::fmin(alpha + io.DeltaTime * 3.0f, 0.5f);
	style.Alpha = std::fmin(style.Alpha + io.DeltaTime * 6.0f, 1.f);

	static std::uint32_t selected_tab = 0;
	ImGui::SetNextWindowSize(ImVec2{ 560.f, 412.f }, ImGuiCond_Once);
	ImGui::Begin(_("cheats.tw pt samp 2"), nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	ImGui::BeginChild(_("tabs"), ImVec2{ 150, 0 }, true);

	static constexpr const char* tabs[]{
		"players",
		"entities",
		"misc"
	};

	static constexpr const char* state_type[]{
		"none",
		"hooked",
		"trapped",
		"hiding",
		"dead",
		"caged"
	};

	for (std::size_t i = 0; i < IM_ARRAYSIZE(tabs); ++i) {
		if (ImGui::Selectable(tabs[i], selected_tab == i)) {
			selected_tab = i;
		}
	}

	ImGui::EndChild();

	ImGui::SameLine();

	ImGui::BeginGroup();

	switch (selected_tab) {
		case 0:
			ImGui::Text(_("players esp"));
			ImGui::Separator();
			ImGui::Spacing();

			ImGui::Checkbox("name", &variables::players::name);
			ImGui::Checkbox("skeleton", &variables::players::skeleton);
			ImGui::Checkbox("snapline", &variables::players::snapline);

			ImGui::Spacing();
			ImGui::Spacing();

			ImGui::Text("survivor color");
			ImGui::SameLine();
			ImGui::ColorEdit4(("##survivor_color"), variables::players::survivor_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Text("killer color");
			ImGui::SameLine();
			ImGui::ColorEdit4(("##killer_color"), variables::players::killer_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			break;
		case 1:
			ImGui::Text("entities esp");
			ImGui::Separator();
			ImGui::Spacing();

			ImGui::Checkbox("generator", &variables::entities::generator);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##generator_color"), variables::entities::generator_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("searchable", &variables::entities::searchable);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##searchable_color"), variables::entities::searchable_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("hatch", &variables::entities::hatch);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##hatch_color"), variables::entities::hatch_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("locker", &variables::entities::locker);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##locker_color"), variables::entities::locker_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("pallet", &variables::entities::pallet);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##pallet_color"), variables::entities::pallet_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("window", &variables::entities::window);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##window_color"), variables::entities::window_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("totem", &variables::entities::totem);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##totem_color"), variables::entities::totem_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("zombie", &variables::entities::zombie);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##zombie_color"), variables::entities::zombie_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Spacing();
			ImGui::Spacing();

			ImGui::Text("max distance");
			ImGui::SliderFloat("##max_distance", &variables::entities::max_distance, 0.f, 100.f, "%.3gm", 1.f);
			break;
		case 2:
			ImGui::Text("misc");
			ImGui::Separator();
			ImGui::Spacing();

			ImGui::Checkbox("auto skillcheck", &variables::misc::auto_skillcheck);
			ImGui::Checkbox("fov changer", &variables::misc::fov_changer);
			ImGui::SliderFloat("##fov_value", &variables::misc::fov_value, 60.f, 150.f, "%.3g", 1.f);

			ImGui::Checkbox("speed hack", &variables::misc::speed_hack, true);
			if (variables::misc::speed_hack) {
				ImGui::SameLine();
				ImGui::Hotkey("##speed_key", &variables::misc::speed_key, { 80.f, 20.f });
				ImGui::SliderFloat("##speed", &variables::misc::speed, 0.f, 300.f, "%.3g", 1.f);
				ImGui::Spacing();
			}

			ImGui::Checkbox("set state", &variables::misc::state, true);
			if (variables::misc::state) {
				ImGui::SameLine();
				ImGui::Hotkey("##state_key", &variables::misc::state_key, { 80.f, 20.f });

				ImGui::Text("type");
				ImGui::Combo("##state_type", &variables::misc::state_type, state_type, IM_ARRAYSIZE(state_type));
				ImGui::Spacing();
			}

			ImGui::Checkbox("trap immunity", &variables::misc::trap_immunity, true);
			break;
		default:
			break;
	}

	ImGui::EndGroup();

	ImGui::End();
}