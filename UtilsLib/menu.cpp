#include "menu.h"

#include <iostream>

/*TODO: Implement WinAPI to detect keypresses (optionally) directly.*/

namespace efiilj
{

	Menu::Menu(std::string title, std::string prompt) : title(title), prompt(prompt) { }

	bool Menu::show() const
	{
		cout << "\n";

		int select;

		while (true)
		{
			if (title.length() > 0)
			{
				cout << title << "\n\n";
			}

			listItems();

			if (efiilj::IOUtils::getNum<int>(select, prompt, 1 - allowExit, _items.size()))
			{
				if (select == 0 || _items[select - 1].invoke())
					return true;
			}
			else return false;

			cout << "\n";
		}
	}

	void Menu::addItem(std::string name, bool(*func)())
	{
		_items.push_back(MenuItem(this, name, func));
	}

	void Menu::addItem(std::string name, Menu* subMenu)
	{
		subMenu->_isSubmenu = true;
		_items.push_back(MenuItem(this, name, subMenu));
	}

	void Menu::listItems() const
	{
		int i = 1;
		for (auto it = _items.begin(); it != _items.end(); it++)
		{
			cout << i << ". " << it->name << "\n";
			i++;
		}
		if (allowExit)
		{
			if (_isSubmenu)
				cout << "0. Back\n";
			else
				cout << "0. Quit\n";
		}
	}

	Menu::~Menu() { }
}

