#pragma once

#include <string>
#include <map>

namespace efiilj {

	class PhoneBook
	{
	public:
		PhoneBook(std::string name);

		std::string name;

		bool findUser(std::string name);
		bool findUser(std::string name, std::string &out);
		bool addUser(std::string name, std::string number);
		bool changeUser(std::string name, std::string number);
		bool addAlias(std::string name, std::string alias);

		~PhoneBook();

	private:
		std::map<std::string, std::string> items;
	};

}

