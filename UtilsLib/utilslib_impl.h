#pragma once

#include "utilslib.h"

#include <stdexcept>
#include <iostream>
#include <sstream>

using namespace std;

namespace efiilj {

	template <typename T>
	void GenUtils::swap(T &a, T &b) {
		T temp = a;
		a = b;
		b = temp;
	}

	template <typename T>
	bool IOUtils::get(T &out, std::string prompt, std::string error, int min, int max, char exit) {

		string input;
		T test;

		while (true) {

			cout << prompt;
			getline(cin, input);

			if (input.length() > 0) {

				if (input[0] == exit)
					return false;

				if (isdigit(input[0])) {

					stringstream ss;
					ss << input;
					ss >> test;

					if (test >= min && test <= max) {
						out = test;
						return true;
					}
				}
			}

			cout << error << endl;
		}
	}

}