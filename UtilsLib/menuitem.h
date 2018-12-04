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
		void(*func)();
		bool hasSubmenu;
	public:
		MenuItem();
		MenuItem(const Menu* parent, std::string name, void(*func)());
		MenuItem(const Menu* parent, std::string name, Menu* subMenu);

		std::string name;

		int index() const;
		void invoke();

		bool operator < (const MenuItem & other) const;
		bool operator == (const MenuItem & other) const;
		bool operator != (const MenuItem & other) const;
	};

}