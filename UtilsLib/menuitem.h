#pragma once

#include <string>

namespace efiilj
{
	class Menu;
	class MenuItem
	{
	private:
		Menu* subMenu;
		const Menu* parent;
		bool(*func)();
		bool hasSubmenu;
	public:
		MenuItem();
		MenuItem(const Menu* parent, std::string name, bool(*func)());
		MenuItem(const Menu* parent, std::string name, Menu* subMenu);

		std::string name;

		bool invoke() const;

		friend class Menu;
	};

}