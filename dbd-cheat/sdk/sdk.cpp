#include <fstream>
#include <iomanip>
#include <sstream>
#include <thread>
#include "sdk.h"
#include "../hooks/hooks.h"

namespace sdk {
	std::string FNameEntry::String() const {
		if (bIsWide) {
			return std::string();
		}

		return { AnsiName, Len };
	}

	FNameEntry* FNamePool::GetEntry(const FNameEntryHandle handle) const {
		return reinterpret_cast<FNameEntry*>(Blocks[handle.Block] + Stride * static_cast<std::uint64_t>(handle.Offset));
	}

	std::string FName::GetName() const {
		const auto entry = name_pool->GetEntry(Index);

		auto name = entry->String();
		if (Number > 0) {
			name += '_' + std::to_string(Number);
		}

		const auto pos = name.rfind('/');
		if (pos != std::string::npos) {
			name = name.substr(pos + 1);
		}

		return name;
	}

	std::string UObject::GetName() const {
		return Name.GetName();
	}

	std::string UObject::GetFullName() const {
		std::string name;
		for (auto outer = Outer; outer; outer = outer->Outer) {
			name = outer->GetName() + "." + name;
		}

		name = Class->GetName() + " " + name + this->GetName();
		return name;
	}

	UObject* TUObjectArray::GetObjectPtr(const std::uint32_t id) const {
		if (id >= NumElements) return nullptr;
		const std::uint64_t chunkIndex = id / 65536;
		if (chunkIndex >= NumChunks) return nullptr;

		const auto chunk = Objects[chunkIndex];
		if (!chunk) return nullptr;

		const std::uint32_t withinChunkIndex = id % 65536 * 24;
		const auto item = *reinterpret_cast<UObject**>(chunk + withinChunkIndex);
		return item;
	}

	UObject* TUObjectArray::FindObject(const char* name) const {
		for (auto i = 0u; i < NumElements; i++) {
			const auto object = GetObjectPtr(i);
			if (object && object->GetFullName() == name) {
				return object;
			}
		}
		return nullptr;
	}

	void UObject::ProcessEvent(void* UFunction, void* Params) {
		auto vtable = *reinterpret_cast<void***>(this);
		reinterpret_cast<void(*)(void*, void*, void*)>(vtable[66])(this, UFunction, Params);
	}

	bool APlayerController::ProjectWorldLocationToScreen(const FVector& WorldLocation, FVector2D& ScreenLocation) {
		struct {
			FVector WorldLocation;
			FVector2D ScreenLocation;
			bool bPlayerViewportRelative;
			bool ReturnValue;
		} params{};

		params.WorldLocation = WorldLocation;
		params.ScreenLocation = ScreenLocation;
		params.bPlayerViewportRelative = FALSE;

		ProcessEvent(world_to_screen, &params);

		ScreenLocation = params.ScreenLocation;

		return params.ReturnValue;
	}

	void APlayerController::GetViewportSize(int& X, int& Y) {
		struct {
			int X;
			int Y;
		} params{};

		params.X = X;
		params.Y = Y;

		ProcessEvent(get_viewport_size, &params);

		X = params.X;
		Y = params.Y;
	}

	void UCanvas::K2_DrawLine(const FVector2D ScreenPositionA, const FVector2D ScreenPositionB, const float Thickness, const FLinearColor Color) {
		struct {
			FVector2D ScreenPositionA;
			FVector2D ScreenPositionB;
			float Thickness;
			FLinearColor Color;
		} params{};

		params.ScreenPositionA = ScreenPositionA;
		params.ScreenPositionB = ScreenPositionB;
		params.Thickness = Thickness;
		params.Color = Color;

		ProcessEvent(draw_line, &params);
	}

	void UCanvas::K2_DrawText(const FString RenderText, const FVector2D ScreenPosition, const FVector2D Scale, const FLinearColor RenderColor, const float Kerning, const FLinearColor ShadowColor, const FVector2D ShadowOffset, const bool bCentreX, const bool bCentreY, const bool bOutlined, const FLinearColor OutlineColor) {
		struct {
			UObject* RenderFont;
			FString RenderText;
			FVector2D ScreenPosition;
			FVector2D Scale;
			FLinearColor RenderColor;
			float Kerning;
			FLinearColor ShadowColor;
			FVector2D ShadowOffset;
			bool bCentreX;
			bool bCentreY;
			bool bOutlined;
			FLinearColor OutlineColor;
		} params{};

		params.RenderFont = font;
		params.RenderText = RenderText;
		params.ScreenPosition = ScreenPosition;
		params.Scale = Scale;
		params.RenderColor = RenderColor;
		params.Kerning = Kerning;
		params.ShadowColor = ShadowColor;
		params.ShadowOffset = ShadowOffset;
		params.bCentreX = bCentreX;
		params.bCentreY = bCentreY;
		params.bOutlined = bOutlined;
		params.OutlineColor = OutlineColor;

		ProcessEvent(draw_text, &params);
	}

	struct FVector AActor::K2_GetActorLocation() {
		struct {
			struct FVector ReturnValue;
		} params{};

		ProcessEvent(get_actor_location, &params);

		return params.ReturnValue;
	}

	bool init() {
		const auto main = reinterpret_cast<std::uintptr_t>(GetModuleHandleA(nullptr));
		if (!main) return false;

		sdk::name_pool = reinterpret_cast<decltype(sdk::name_pool)>(utils::pattern_scan(main, "48 8D 1D ? ? ? ? EB 16 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B D8 C6 05 ? ? ? ? ? 0F 28"));
		if (!sdk::name_pool) return false;

		sdk::object_array = reinterpret_cast<decltype(sdk::object_array)>(utils::pattern_scan(main, "48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1 EB"));
		if (!sdk::object_array) return false;

		sdk::world = reinterpret_cast<decltype(sdk::world)>(utils::pattern_scan(main, "48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01 33 D2 48 8B CB E8"));
		if (!sdk::world) return false;

		sdk::get_actor_location = sdk::object_array->FindObject("Function Engine.Actor.K2_GetActorLocation");
		sdk::world_to_screen = sdk::object_array->FindObject("Function Engine.PlayerController.ProjectWorldLocationToScreen");
		sdk::get_viewport_size = sdk::object_array->FindObject("Function Engine.PlayerController.GetViewportSize");
		sdk::draw_line = sdk::object_array->FindObject("Function Engine.Canvas.K2_DrawLine");
		sdk::draw_text = sdk::object_array->FindObject("Function Engine.Canvas.K2_DrawText");
		sdk::font = sdk::object_array->FindObject("Font Roboto.Roboto");

		hooks::init();

		return true;
	}
}
