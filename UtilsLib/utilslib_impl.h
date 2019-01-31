#pragma once

#include "utilslib.h"

#include <typeinfo>
#include <stdexcept>
#include <iostream>
#include <sstream>

namespace efiilj {

	template <typename T>
	void GenUtils::Swap(T &a, T &b) {
		T temp = a;
		a = b;
		b = temp;
	}

	template<typename T>
	bool IOUtils::Input(T& out, bool exit, std::string prompt)
	{
		std::stringstream err, ss;
		std::string input, error;
		T test;

		while (true) {

			ss.clear();
			ss.str(std::string());

			cout << prompt;
			getline(cin, input);

			if (input.length() > 0) {

				if (input.length() == 1 && input[0] == '\0')
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
	}

	template <typename T, typename>
	bool IOUtils::Input(T& out, bool exit, std::string prompt, int min, int max) {

		static_assert(std::is_arithmetic<T>::value, "Type must be arithmetic");

		std::stringstream err, ss;
		std::string input, error;
		T test;

		err << "\nPlease enter '" << typeid(T).name() << "'";
		if (min != INT_MIN && max != INT_MAX)
			err << " between " << min << " and " << max;
		else if (min != INT_MIN)
			err << " above " << min;
		else if (max != INT_MAX)
			err << " below " << max;

		err << ".\n";

		if (exit)
			err << "Ctrl + Z to exit.\n";

		error = err.str();

		while (true) {

			ss.clear();
			ss.str(std::string());

			cout << prompt;
			getline(cin, input);

			if (input.length() > 0) {

				if (input.length() == 1 && input[0] == '\0')
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
}

//extern UTILSLIB_API int nUtilsLib;
//
//UTILSLIB_API int fnUtilsLib(void);