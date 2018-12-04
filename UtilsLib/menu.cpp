#include "menu.h"

#include <iostream>

/*TODO: Implement WinAPI to detect keypresses (optionally) directly.*/

namespace efiilj
{

	Menu::Menu() { }
	Menu::Menu(std::string title, std::string prompt) : title(title), prompt(prompt) { }

	void Menu::show() const
	{
		if (title.length() > 0)
		{
			cout << title << "\n";
		}


		if (allowExit())
			cout << "Enter '" << exit << "' to exit.\n\n";

		listItems();

		int select;
		if (efiilj::IOUtils::getNum<int>(select, prompt, error, 1 - allowExit(), _items.size()))
		{
			
		}
	}

	int Menu::index(const MenuItem* item) const
	{
		return (distance(_items.begin(), _items.find(*item)));
	}

	void Menu::addItem(std::string name, void(*func)())
	{
		_items.insert(MenuItem(this, name, func));
	}

	void Menu::addItem(std::string name, Menu subMenu)
	{
		_items.insert(MenuItem(this, name, &subMenu));
	}

	void Menu::listItems() const
	{
		for (auto it = _items.begin(); it != _items.end(); it++)
		{
			cout << it->index() << ". " << it->name << "\n";
		}
	}

	bool Menu::allowExit() const
	{
		return (exit != "\0");
	}

	Menu::~Menu() { }
}

