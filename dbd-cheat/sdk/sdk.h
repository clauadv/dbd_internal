#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include "../utils/utils.h"

namespace sdk {
	class APlayerState;
	
	struct FNameEntryHandle {
		std::uint32_t Block = 0;
		std::uint32_t Offset = 0;

		FNameEntryHandle(const std::uint32_t block, const std::uint32_t offset) : Block(block), Offset(offset) {}
		FNameEntryHandle(std::uint32_t id) : Block(id >> 16), Offset(id & 65535) {}

		operator std::uint32_t() const {
			return (Block << 16 | Offset);
		}
	};

	struct FNameEntry {
		std::uint32_t ComparisonId;
		std::uint16_t bIsWide : 1;
		std::uint16_t Len : 15;

		union {
			char AnsiName[1024];
			wchar_t WideName[1024];
		};

		[[nodiscard]]
		std::string String() const;
	};

	struct FNamePool {
		unsigned char Lock[8];
		static constexpr int Stride = 0x04;
		std::uint32_t CurrentBlock;
		std::uint32_t CurrentByteCursor;
		unsigned char* Blocks[8192];

		[[nodiscard]]
		FNameEntry* GetEntry(FNameEntryHandle handle) const;
	};

	struct FName {
		std::int32_t ComparisonIndex;
		std::uint32_t Index;
		std::uint32_t Number;

		[[nodiscard]]
		std::string GetName() const;
	};

	class UObject {
	public:
		static class TUObjectArray* GObjects;
		void** VfTable;
		std::int32_t Flags;
		std::int32_t InternalIndex;
		class UObject* Class;
		FName Name;
		unsigned char pad_E9RLZJQMXF[0x04];
		class UObject* Outer;

		[[nodiscard]]
		std::string GetName() const;

		[[nodiscard]]
		std::string GetFullName() const;

		void ProcessEvent(void* UFunction, void* Params);
	};

	template<class T>
	struct TArray {
		friend struct FString;

		[[nodiscard]]
		int size() const {
			return Count;
		}

		T& operator[](int i) {
			return Data[i];
		}

		[[nodiscard]]
		bool is_valid(int i) const {
			return i < size();
		}

	private:
		T* Data;
		std::int32_t Count;
		std::int32_t Max;
	};

	struct FString : private TArray<wchar_t> {
		FString() {}
		FString(const wchar_t* other) {
			Max = Count = *other ? std::wcslen(other) + 1 : 0;

			if (Count) {
				Data = const_cast<wchar_t*>(other);
			}
		};

		[[nodiscard]]
		bool IsValid() const {
			return Data != nullptr;
		}

		[[nodiscard]]
		const wchar_t* c_str() const {
			return Data;
		}

		[[nodiscard]]
		std::string ToString() const {
			const auto length = std::wcslen(Data);

			std::string str(length, '\0');

			std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

			return str;
		}
	};

	struct FLinearColor {
		float R;
		float G;
		float B;
		float A;
	};

	struct FMatrix {
		float M[4][4];
	};

	struct FVector2D {
		float X;
		float Y;
	};

	struct FVector {
		float X;
		float Y;
		float Z;
	};

	struct FRotator {
		float Pitch;
		float Yaw;
		float Roll;
	};


	/*
	* game classes
	*/

	class TUObjectArray {
	public:
		[[nodiscard]] UObject* GetObjectPtr(std::uint32_t id) const;
		UObject* FindObject(const char* name) const;

	private:
		unsigned char** Objects{};
		unsigned char* PreAllocatedObjects{};
		std::uint32_t MaxElements{};
		std::uint32_t NumElements{};
		std::uint32_t MaxChunks{};
		std::uint32_t NumChunks{};
	};

	class AActor : public UObject {
	public:
		FVector K2_GetActorLocation();
	};

	class APlayerController : public AActor {
	public:
		bool ProjectWorldLocationToScreen(const FVector& WorldLocation, FVector2D& ScreenLocation);
		void GetViewportSize(int& X, int& Y);
	};

	class APlayerState {
	public:
		AActor* PawnPrivate() {
			return *reinterpret_cast<AActor**>(this + 0x298);
		}

		FString* PlayerNamePrivate() {
			// crashing here
			// todo: fix

			return *reinterpret_cast<FString**>(this + 0x318);
		}
	};

	class ULevel {
	public:
		TArray<AActor*> Actors() {
			return *reinterpret_cast<TArray<AActor*>*>(this + 0x30);
		}
	};

	class UPlayer {
	public:
		APlayerController* PlayerController() {
			return *reinterpret_cast<APlayerController**>(this + 0x38);
		}

		UObject* ViewportClient() {
			return *reinterpret_cast<UObject**>(this + 0x78);
		}
	};

	class UGameInstance {
	public:
		TArray<UPlayer*> LocalPlayers() {
			return *reinterpret_cast<TArray<UPlayer*>*>(this + 0x40);
		}
	};

	class AGameStateBase {
	public:
		TArray<APlayerState*> PlayerArray() {
			return *reinterpret_cast<TArray<APlayerState*>*>(this + 0x248);
		}
	};

	class UWorld {
	public:
		UGameInstance* OwningGameInstance() {
			return *reinterpret_cast<UGameInstance**>(this + 0x198);
		}

		AGameStateBase* GameState() {
			return *reinterpret_cast<AGameStateBase**>(this + 0x140);
		}
	};

	class UCanvas : public UObject {
	public:
		void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor Color);
		void K2_DrawText(FString RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor);
	};

	/*
	* sdk
	*/

	inline FNamePool* name_pool;
	inline TUObjectArray* object_array;
	inline UWorld* world;
	inline std::uintptr_t get_viewpoint;
	inline std::uintptr_t get_bone_matrix;
	inline int width, height;

	/*
	* functions
	*/

	inline UObject* get_actor_location;
	inline UObject* world_to_screen;
	inline UObject* get_viewport_size;
	inline UObject* draw_line;
	inline UObject* draw_text;
	inline UObject* font;

	bool init();
}