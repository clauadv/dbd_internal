#include <pch.h>

bool sdk::a_pallet::is_pallet() const {
	const auto name = this->get_name();

	if (name.contains("Bookshelf_Vault")) {
		return true;
	}

	return false;
}