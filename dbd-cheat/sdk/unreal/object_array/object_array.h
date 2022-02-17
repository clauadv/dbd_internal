#pragma once

namespace sdk {
	struct u_name;
	struct u_object_array;
	struct u_class;

	struct u_object {
		static sdk::u_object_array* objects;
		void** vf_table; // 0x00(0x08)
		std::int32_t flags; // 0x08(0x04)
		std::int32_t internal_index; // 0xc(0x4)
		sdk::u_class* _class; // 0x10(0x08)
		sdk::u_name name; // 0x18(0xc)
		char pad_0001[0x04]; // 0x24(0x04)
		sdk::u_object* outer; // 0x28(0x08)

		std::string get_name() const;
		std::string get_full_name() const;
		bool is_a(void* cmp) const;
	};

	struct u_object_array {
		unsigned char** objects;
		unsigned char* pre_allocated_objects;
		std::uint32_t max_elements;
		std::uint32_t num_elements;
		std::uint32_t max_chunks;
		std::uint32_t num_chunks;

		sdk::u_object* get_object_ptr(std::uint32_t id) const;
		sdk::u_object* find_object(const char* name) const;
	};

	inline u_object_array* object_array;
}
