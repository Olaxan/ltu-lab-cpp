#pragma once

#include "utilslib.h"
#include "menuitem.h"

#include <string>
#include <set>

namespace efiilj
{

	class Menu
	{
	private:
		std::set<MenuItem> _items;
		bool allowExit() const;
	public:
		Menu();
		Menu(std::string title, std::string prompt = "> ");

		std::string title = "";
		std::string error = "";
		std::string prompt;
		std::string exit = "\0";

		int index(const MenuItem* item) const;

		void addItem(std::string name, void(*func)());
		void addItem(std::string name, Menu subMenu);
		void removeItem(std::string item);

		void listItems() const;
		void show() const;

		~Menu();
	};

}

