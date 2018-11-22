#include "..\UtilsLib\utilslib.h"
#include "dict.h"

#include <iostream>
#include <map>

using namespace std;

int main() {

	int select;

	/*=== COMMENT OUT ONE OF THESE ===*/

	//efiilj::DictMap *dict = new efiilj::DictMap();
	efiilj::DictVector *dict = new efiilj::DictVector();
	
	
	printf("WORD-PAL SUPER DICTIONARY 3000\n"
		"1. Insert\n"
		"2. Lookup\n"
		"3. List\n"
		"0. Exit\n"
	);

	while (efiilj::IOUtils::getNum<int>(select, '0')) {

		switch (select) {
		case 1: {
			string word, def;

			if (cout << "Insert: " && getline(cin, word)) {

				if (!dict->findWord(word)) {

					if (cout << "Define: " && getline(cin, def)) {
						dict->addWord(word, def);
						cout << "Word '" << word << "' added!";
					}
					else
						cout << "Aborted.";
				}
				else
					cout << "Word '" << word << "' already exists!";
			}
			else
				cout << "Aborted.";

			break;
		}
		case 2: {
			string word, def;
			
			if (cout << "Lookup: " && getline(cin, word)) {

				if (dict->findWord(word, def))
					cout << word << ": " << def;
				else
					cout << "Word '" << word << "' is not defined!";
			}
			else
				cout << "Aborted.";

			break;
		}
		case 3: {
			dict->list();
			break;
		}
		case 4: {
			efiilj::ToddUtils::createTodd();
			break;
		}
		default:
			cout << "Please select an item 0-3.";
		}

		cout << endl;
	}

	delete dict;
}