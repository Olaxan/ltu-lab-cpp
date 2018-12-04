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
	MenuItem::MenuItem(const Menu* parent, std::string name, void(*func)()) : parent(parent), name(name), func(func), hasSubmenu(false) { }
	MenuItem::MenuItem(const Menu* parent, std::string name, Menu* subMenu) : parent(parent), name(name), subMenu(subMenu), hasSubmenu(true) { }

	bool MenuItem::operator<(const MenuItem & other) const
	{
		return (this->name[0] < other.name[0]);
	}

	bool MenuItem::operator==(const MenuItem & other) const
	{
		return (this->name == other.name);
	}

	bool MenuItem::operator!=(const MenuItem & other) const
	{
		return (this->name != other.name);
	}

	int MenuItem::index() const
	{
		if (parent == nullptr)
			return -1;

		return parent->index(this);
	}

	void MenuItem::invoke()
	{
		if (hasSubmenu)
			this->subMenu->show();
		else
			this->func();
	}
}