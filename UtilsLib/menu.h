#pragma once

#include "utilslib.h"

#include <string>
#include <vector>

namespace efiilj
{

	class Menu
	{
	public:

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

			bool Invoke() const;

			friend class Menu;
		};

		Menu(std::string title = "", std::string prompt = "> ");

		std::string title;
		std::string prompt;
		
		bool allowExit = true;

		void addItem(std::string name, bool(*func)());
		void addItem(std::string name, Menu* subMenu);
		void removeItem(std::string item);
		void listItems() const;
		
		bool show() const;

		~Menu();

	private:
		std::vector<MenuItem> _items;
		bool _isSubmenu = false;

		friend class MenuItem;
	};

}

