#pragma once

#define with_case_preserving_name

namespace ue4::core_object {
	class u_name_entry_handle {
	public:
		std::uint32_t block = 0;
		std::uint32_t offset = 0;

		u_name_entry_handle(const std::uint32_t block, const std::uint32_t offset) : block(block), offset(offset) {}
		u_name_entry_handle(std::uint32_t id) : block(id >> 16), offset(id & 65535) {}

		operator std::uint32_t() const {
			return (block << 16 | offset);
		}
	};

	class u_name_entry {
	public:
	#ifdef with_case_preserving_name
		std::uint32_t comparison_id;
		std::uint16_t is_wide : 1;
		std::uint16_t len : 15;
	#else
		std::uint16_t is_wide : 1;
		std::uint16_t lowercase_probe_hash : 5;
		std::uint16_t len : 10;
	#endif

		union {
			char ansi_name[1024];
			wchar_t wide_name[1024];
		};

		std::string string() const;
	};

	class u_name_pool {
	public:
		unsigned char lock[8];
	#ifdef with_case_preserving_name
		static constexpr int stride = 0x04;
	#else
		static constexpr int stride = 0x02;
	#endif
		std::uint32_t current_block;
		std::uint32_t current_byte_cursor;
		unsigned char* blocks[8192];

		ue4::core_object::u_name_entry* get_entry(ue4::core_object::u_name_entry_handle handle) const;
	};

	class u_name {
		friend class u_object;
	public:
	#ifdef with_case_preserving_name
		std::uint32_t comparison_index;
	#endif
		std::uint32_t index;
		std::uint32_t number;

		std::string get_name() const;
	};

	inline ue4::core_object::u_name_pool* names;
}