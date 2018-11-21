#include "book.h"
#include "user.h"

#include <string>

using namespace std;

namespace efiilj {

	PhoneBook::PhoneBook(string name)
	{
		this->name = name;
	}

	bool PhoneBook::findUser(string name) {
		auto it = this->users.find(name);
		return (it != this->users.end());
	}

	bool PhoneBook::findUser(string name, string &number) {
		auto it = this->users.find(name);
		if (it != this->users.end()) {
			number = users[name]->number;
			return true;
		}
		else
			return false;
	}

	bool PhoneBook::addUser(string name, string number) {

		if (!this->findUser(name)) {
			this->users[name] = new efiilj::User(name, number);
			return true;
		}
		else
			return false;
	}


	bool PhoneBook::changeUser(string name, string number) {
		if (this->findUser(name)) {
			this->users[name]->number = number;
			return true;
		}
		else
			return false;
	}

	bool PhoneBook::addAlias(string name, string alias) {
		if (this->findUser(name)) {
			this->users[alias] = this->users[name];
			return true;
		}
		else
			return false;
	}


	PhoneBook::~PhoneBook()
	{
	}

}