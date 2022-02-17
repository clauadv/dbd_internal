#pragma once

namespace sdk {
	struct u_name_entry_handle {
		std::uint32_t block = 0;
		std::uint32_t offset = 0;

		u_name_entry_handle(const std::uint32_t block, const std::uint32_t offset) : block(block), offset(offset) {}
		u_name_entry_handle(std::uint32_t id) : block(id >> 16), offset(id & 65535) {}

		operator std::uint32_t() const {
			return (block << 16 | offset);
		}
	};

	struct u_name_entry {
		std::uint32_t comparison_id;
		std::uint16_t is_wide : 1;
		std::uint16_t len : 15;

		union {
			char ansi_name[1024];
			wchar_t wide_name[1024];
		};

		std::string string() const;
	};

	struct u_name_pool {
		unsigned char lock[8];
		static constexpr int stride = 0x04;
		std::uint32_t current_block;
		std::uint32_t current_byte_cursor;
		unsigned char* blocks[8192];

		u_name_entry* get_entry(u_name_entry_handle handle) const;
	};

	struct u_name {
		std::uint32_t comparison_index;
		std::uint32_t index;
		std::uint32_t number;

		std::string get_name() const;
	};

	inline u_name_pool* name_pool;
}