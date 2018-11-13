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
	bool IOUtils::getNum(T &out, std::string prompt, std::string error, int min, int max, char exit) {

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
	bool IOUtils::getNum(T &out, std::string prompt, std::string error, char exit) {
		return IOUtils::getNum(out, prompt, error, INT_MIN, INT_MAX, exit);
	}

	template <typename T>
	bool IOUtils::getNum(T &out, std::string prompt, char exit) {
		stringstream ss;
		ss << "Invalid input - " << typeid(T).name() << " expected.";
		return IOUtils::getNum(out, prompt, ss.str(), INT_MIN, INT_MAX, exit);
	}

	template <typename T>
	bool IOUtils::getNum(T &out, char exit) {
		stringstream ss;
		ss << "Invalid input - " << typeid(T).name() << " expected.";
		return IOUtils::getNum(out, "> ", ss.str(), INT_MIN, INT_MAX, exit);
	}

	template <typename T>
	bool IOUtils::getNum(T &out) {
		stringstream ss;
		ss << "Invalid input - " << typeid(T).name() << " expected.";
		return IOUtils::getNum(out, "> ", ss.str(), INT_MIN, INT_MAX, '\0');
	}

}