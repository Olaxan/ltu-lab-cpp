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
	bool IOUtils::getNum(T &out, char exit, std::string prompt, std::string error, int min, int max) {

		static_assert(std::is_arithmetic<T>::value, "Type must be arithmetic");

		stringstream ss;
		string input;
		T test;

		while (true) {

			cout << prompt;
			getline(cin, input);

			if (input.length() > 0) {

				if (input[0] == exit)
					return false;

				ss << input;
				ss >> test;

				if (isdigit(input[0])) {

					if (test >= min && test <= max) {
						out = test;
						return true;
					}

				}
			}

			cout << error << endl;
		}
	}

	template <typename T>
	bool IOUtils::getNum(T &out, std::string prompt, std::string error, int min, int max) {
		return IOUtils::getNum(out, '\0', prompt, error, min, max);
	}
}