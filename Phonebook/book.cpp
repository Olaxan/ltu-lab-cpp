#include "book.h"

#include <string>

using namespace std;

namespace efiilj {

	PhoneBook::PhoneBook(string name)
	{
		this->name = name;
	}

	bool PhoneBook::findUser(string name) {
		auto it = this->items.find(name);
		return (it != this->items.end());
	}

	bool PhoneBook::findUser(string name, string &number) {
		auto it = this->items.find(name);
		if (it != this->items.end()) {
			number = items[name];
			return true;
		}
		else
			return false;
	}

	bool PhoneBook::addUser(string name, string number) {
		if (!this->findUser(name)) {
			this->items[name] = number;
			return true;
		}
		else
			return false;
	}


	bool PhoneBook::changeUser(string name, string number) {
		if (this->findUser(name)) {
			this->items[name] = number;
			return true;
		}
		else
			return false;
	}

	bool PhoneBook::addAlias(string name, string alias) {
		if (this->findUser(name)) {
			this->items[alias] = this->items[name];
			return true;
		}
		else
			return false;
	}


	PhoneBook::~PhoneBook()
	{
	}

}