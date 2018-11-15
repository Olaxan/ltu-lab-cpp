#include "..\UtilsLib\utilslib.h"

#include <iostream>
#include <map>

using namespace std;

int main() {

	int select;
	string word, def;
	map<string, string> store;
	
	printf("WORD-PAL SUPER DICTIONARY 3000\n"
		"1. Insert\n"
		"2. Lookup\n"
		"0. Exit\n"
	);

	while (efiilj::IOUtils::getNum<int>(select, '0')) {

		switch (select) {
		case 1:
			
			cout << "Insert: ";
			if (getline(cin, word)) {

				auto it = store.find(word);
				if (it == store.end()) {
					cout << "Define: ";
					if (getline(cin, def)) {
						store[word] = def;
						cout << "Added " << word << "!";
					}
					else
						cout << "Aborted.";
				}
				else
					cout << "Word " << word << " already exists!";

			}
			else
				cout << "Aborted.";
			break;

		case 2:

			cout << "Lookup: ";
			if (getline(cin, word)) {
				auto it = store.find(word);
				if (it != store.end()) {
					cout << word << ": " << store[word];
				}
				else
					cout << "Word " << word << " is not defined!";

			}
			else
				cout << "Aborted.";
			break;
		
		default:
			cout << "Please select an item 0-2.";
		}

		cout << endl;
	}
}