#pragma once

namespace ue4::core_object {
	class object_array;
	class u_class;

	class u_object {
		friend class object_array;
	public:
		static ue4::core_object::object_array* objects;
		void** vf_table; // 0x00(0x08)
		std::int32_t flags; // 0x08(0x04)
		std::int32_t internal_index; // 0xc(0x4)
		ue4::core_object::u_class* _class; // 0x10(0x8)
		ue4::core_object::u_name name; // 0x18(0x8)
		char pad_0001[0x04]; // 0x20(0x04)
		ue4::core_object::u_object* outer; // 0x24(0x08)

		std::string get_name() const;
		std::string get_full_name() const;
		bool is_a(void* cmp) const;
	};

	class object_array {
	public:
		unsigned char** objects;
		unsigned char* pre_allocated_objects;
		std::uint32_t max_elements;
		std::uint32_t num_elements;
		std::uint32_t max_chunks;
		std::uint32_t num_chunks;

		ue4::core_object::u_object* get(std::uint32_t id) const;
		ue4::core_object::u_object* find(const char* name) const;
	};

	inline ue4::core_object::object_array* objects;
}