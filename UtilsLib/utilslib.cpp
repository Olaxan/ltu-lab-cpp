#include "utilslib.h"

#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;

namespace efiilj {

	int IOUtils::askInt(std::string prompt, std::string error, int min, int max, char exit) {

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
				if (test > min && test < max) {
					return test;
				}
			}

			cout << error << endl;

		}
	}

	int IOUtils::askInt(std::string prompt, std::string error, int min, int max) {
		return IOUtils::askInt(prompt, error, min, max, '\0');
	}

	int IOUtils::askInt(std::string prompt, std::string error, char exit) {
		return IOUtils::askInt(prompt, error, INT_MIN, INT_MAX, exit);
	}

	int IOUtils::askInt(std::string prompt, std::string error) {
		return IOUtils::askInt(prompt, error, INT_MIN, INT_MAX, '\0');
	}

	int IOUtils::showMenu(std::string* items, std::string prompt, std::string error, bool showExit) {

	}

	int MathUtils::neg(int n) {
		return -abs(n);
	}
}
