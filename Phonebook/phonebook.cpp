#include "..\UtilsLib\utilslib.h"
#include "book.h"

#include <iostream>
#include <vector>
#include "book.h"

using namespace std;

const string ERR_ARG = "Invalid command.";
const string ERR_ARG_NUM = "Invalid number of arguments.";
const string STR_BANNER = "TeleFun Catalogue System 1.0\nEnter 'help' or '?' for a list of commands.";
const string STR_HELP = "Command syntax:\n - add <name> <number>\n - lookup <name>\n - change <name> <number>\n - alias <name> <alias>\n - todd\n - quit";

int main() {

	string input;
	vector<string> items;
	efiilj::PhoneBook book = efiilj::PhoneBook("Default");

	cout << STR_BANNER << endl;

	while (cout << "> " && getline(cin, input)) {

		items = efiilj::GenUtils::split(input);

		if (items.size()) {

			items[0][0] = tolower(items[0][0]);

			if (items.size() > 1)
				items[1][0] = toupper(items[1][0]);
			if (items.size() > 2)
				items[2][0] = toupper(items[2][0]);

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
						cout << "User " << items[1] << " has number " << number << ".";
					else
						cout << "User " << items[1] << " does not exist!";
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
			else if (items[0] == "help" || items[0] == "?") {

				cout << STR_HELP;

			}
			else if (items[0] == "todd" || items[0] == "itjustworks") {

				efiilj::ToddUtils::createTodd();

			}
			else if (items[0] == "quit") {
				break;
			}
			else
				cout << ERR_ARG;

		}
		else
			cout << ERR_ARG;

		cout << endl;

	}

}
