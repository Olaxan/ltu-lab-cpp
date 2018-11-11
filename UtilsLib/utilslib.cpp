#include "utilslib.h"

#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;

namespace efiilj {

	int IOUtils::askInt(std::string prompt, std::string error, char exit) {

		string input;
		int num;

		while (true) {

			cout << prompt;
			cin >> input;

			if (input.length() == 1 && input[0] == exit) {
				return 0;
			}

			try
			{
				num = stoi(input);
				return num;
			}
			catch (const std::invalid_argument)
			{
				cout << error << endl;
			}
		}
	}

	int IOUtils::askInt(std::string prompt, std::string error) {

		return IOUtils::askInt(prompt, error, '\0');

	}

	int MathUtils::neg(int n) {
		return -abs(n);
	}
}
