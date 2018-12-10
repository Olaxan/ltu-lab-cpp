#pragma once

#include "utilslib.h"

#include <typeinfo>
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
	bool IOUtils::getNum(T &out, char exit, std::string prompt, int min, int max) {

		static_assert(std::is_arithmetic<T>::value, "Type must be arithmetic");

		stringstream err, ss;
		string input, error;
		T test;

		err << "Please enter '" << typeid(T).name() << "' type";
		if (min != INT_MIN && max != INT_MAX)
			err << " between " << min << " and " << max;
		else if (min != INT_MIN)
			err << " above " << min;
		else if (max != INT_MAX)
			err << " below " << max;

		err << ".\n";

		if (exit != '\0')
			err << "'" << exit << "' to exit.\n";

		error = err.str();

		while (true) {

			cout << prompt;
			getline(cin, input);

			if (input.length() > 0) {

				if (input.length() == 1 && input[0] == exit)
					return false;

				ss.clear();
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
	bool IOUtils::getNum(T &out, std::string prompt, int min, int max)
	{
		return getNum<T>(out, '\0', prompt, min, max);
	}
}