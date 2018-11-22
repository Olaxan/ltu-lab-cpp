#include "utilslib.h"

#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;

namespace efiilj {

	int IOUtils::getInt(std::string prompt, std::string error, int min, int max, char exit) {

		string input;
		int test;

		while (true) {

			cout << prompt;
			cin >> input;

			if (input.length() == 1 && input[0] == exit) {
				return 0;
			}
			
			if (isdigit(input[0])) {
				test = stoi(input);
				if (test >= min && test <= max) {
					return test;
				}
			}

			cout << error << endl;

		}
	}
}