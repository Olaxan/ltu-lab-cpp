#include "menu.h"

//Implement hashing functions
namespace std
{
	template <>
	struct hash<efiilj::MenuItem>
	{
		size_t operator()(const efiilj::MenuItem& i) const
		{
			return hash<string>()(i.name);
		}
	};
}

namespace efiilj
{
	MenuItem::MenuItem() : parent(nullptr), name(""), hasSubmenu(false) { }
	MenuItem::MenuItem(const Menu* parent, std::string name, bool(*func)()) : parent(parent), name(name), func(func), hasSubmenu(false) { }
	MenuItem::MenuItem(const Menu* parent, std::string name, Menu* subMenu) : parent(parent), name(name), subMenu(subMenu), hasSubmenu(true) { }

	bool MenuItem::invoke() const
	{
		if (hasSubmenu)
		{
			this->subMenu->show();
			return false;
		}
		else
			return this->func();
	}
}