#pragma once
#include <string>

namespace efiilj {

	class IOUtils {
	public:
		// Asks the user for an integer until one is input.
		static int getInt(std::string prompt = "> ", std::string error = "Please enter a integer", int min = INT_MIN, int max = INT_MAX, char exit = '\0');

		template <typename T>
		static bool get(T &out, std::string prompt = "> ", std::string error = "Please enter a integer", int min = INT_MIN, int max = INT_MAX, char exit = '\0');

	};

	class MathUtils {
	public:
		static int neg(int n);
	};

	class GenUtils {
	public:
		template <typename T>
		static void swap(T &a, T &b);
	};

}

#include "utilslib_impl.h"
//Implementation file for generics