#include <pch.h>
#include "menu.h"
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

void menu::handle_input(sdk::a_pawn* my_player, sdk::a_player_controller* player_controller) {
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
	ImGui::Begin(_("car la san moro ilo"), nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

	ImGui::BeginChild(_("tabs"), ImVec2{ 150, 0 }, true);

	static constexpr const char* tabs[]{
		"survivor",
		"killer",
		"entities",
		"misc"
	};

	static constexpr const char* immobilize_type[]{
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
			ImGui::Text(_("survivor esp"));
			ImGui::Separator();

			ImGui::Checkbox("name", &variables::survivor::name);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##survivor_name_color"), variables::survivor::name_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
			ImGui::Checkbox("distance", &variables::survivor::distance);
			ImGui::Checkbox("skeleton", &variables::survivor::skeleton);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##survivor_skeleton_color"), variables::survivor::skeleton_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
			ImGui::Checkbox("snapline", &variables::survivor::snapline);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##survivor_snapline_color"), variables::survivor::snapline_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			break;
		case 1:
			ImGui::Text("killer esp");
			ImGui::Separator();

			ImGui::Checkbox("name", &variables::killer::name);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##killer_name_color"), variables::killer::name_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
			ImGui::Checkbox("distance", &variables::killer::distance);
			ImGui::Checkbox("skeleton", &variables::killer::skeleton);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##killer_skeleton_color"), variables::killer::skeleton_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);
			ImGui::Checkbox("snapline", &variables::killer::snapline);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##killer_snapline_color"), variables::killer::snapline_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			break;
		case 2:
			ImGui::Text("entities esp");
			ImGui::Separator();

			ImGui::Checkbox("generator", &variables::entities::generator);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##generator_color"), variables::entities::generator_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("pallet", &variables::entities::pallet);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##pallet_color"), variables::entities::pallet_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("chest", &variables::entities::chest);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##chest_color"), variables::entities::chest_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("escape_door", &variables::entities::door);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##escape_door_color"), variables::entities::door_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("window", &variables::entities::window);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##window_color"), variables::entities::window_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("totem", &variables::entities::totem);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##totem_color"), variables::entities::totem_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("hatch", &variables::entities::hatch);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##hatch_color"), variables::entities::hatch_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Checkbox("trap", &variables::entities::trap);
			ImGui::SameLine();
			ImGui::ColorEdit4(("##window_color"), variables::entities::trap_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar);

			ImGui::Spacing();
			ImGui::Text("max distance");
			ImGui::SliderFloat("##max_distance", &variables::entities::max_distance, 0.f, 200.f, "%.3gm", 1.f);
			break;
		case 3:
			ImGui::Text("misc");
			ImGui::Separator();

			ImGui::Checkbox("fov changer", &variables::misc::fov_changer);
			ImGui::Checkbox("auto skillcheck", &variables::misc::auto_skillcheck);
			ImGui::Checkbox("trap immunity", &variables::misc::trap_immunity);
			ImGui::Checkbox("fly", &variables::misc::fly);
			ImGui::SameLine();
			ImGui::Hotkey("##fly_key", &variables::misc::fly_key, { 80.f, 20.f });
			ImGui::Text("speed");
			ImGui::SliderFloat("##fly_speed", &variables::misc::fly_speed, 0.f, 100.f, "%.3g", 1.f);
			ImGui::Checkbox("immobilize", &variables::misc::immobilize);
			ImGui::SameLine();
			ImGui::Hotkey("##immobilize_key", &variables::misc::immobilize_key, { 80.f, 20.f });
			ImGui::Text("type");
			ImGui::Combo("immobilize_type", &variables::misc::immobilize_type, immobilize_type, IM_ARRAYSIZE(immobilize_type));
			ImGui::Checkbox("force escape", &variables::misc::escape);
			ImGui::SameLine();
			ImGui::Hotkey("##escape_key", &variables::misc::escape_key, { 80.f, 20.f });
			break;
		default:
			break;
	}

	ImGui::EndGroup();

	ImGui::End();
}