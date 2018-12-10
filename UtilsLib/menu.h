#pragma once

#include "utilslib.h"
#include "menuitem.h"

#include <string>
#include <vector>

namespace efiilj
{

	class Menu
	{
	private:
		std::vector<MenuItem> _items;
		bool _isSubmenu = false;
	public:
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

		friend class MenuItem;
	};

}

