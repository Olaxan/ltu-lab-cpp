#include "..\UtilsLib\utilslib.h"
#include "book.h"

#include <iostream>
#include <vector>
#include "book.h"

constexpr auto ERR_ARG_NUM = "Invalid number of arguments.";

using namespace std;

int main() {

	string input;
	vector<string> items;
	efiilj::PhoneBook book = efiilj::PhoneBook("Default");

	while (getline(cin, input)) {

		items = efiilj::GenUtils::split(input);

		if (items.size()) {

			if (items[0] == "add") {

				if (items.size() == 3) {
					if (book.addUser(items[1], items[2]))
						cout << "User " << items[1] << " added successfully.";
					else
						cout << "User " << items[1] << " already exists!";
				}
				else
					cout << ERR_ARG_NUM;

			}
			else if (items[0] == "lookup") {

				string number;

				if (items.size() == 2) {
					if (book.findUser(items[1], number))
						cout << "User " << items[1] << " has number " << number;
					else
						cout << "User " << items[1] << " does not exists!";
				}
				else
					cout << ERR_ARG_NUM;

			}
			else if (items[0] == "change") {

				if (items.size() == 3) {
					if (book.changeUser(items[1], items[2]))
						cout << "User " << items[1] << " now has number " << items[2] << ".";
					else
						cout << "User " << items[1] << " does not exist!";
				}
				else
					cout << ERR_ARG_NUM;

			}
			else if (items[0] == "alias") {

				if (items.size() == 3) {
					if (book.addAlias(items[1], items[2]))
						cout << "User " << items[1] << " now has alias " << items[2] << ".";
					else
						cout << "User " << items[1] << " does not exist!";
				}
				else
					cout << ERR_ARG_NUM;

			}
			else if (items[0] == "quit") {
				break;
			}

		}
		else
			cout << "Invalid input.";

		cout << endl;

	}

}
