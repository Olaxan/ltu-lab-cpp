#pragma once

#include <vector>
#include <string>

namespace efiilj {

	class IOUtils {
	public:
		// Asks the user for an integer until one is input.
		static int getInt(std::string prompt = "> ", std::string error = "Please enter an integer.", int min = INT_MIN, int max = INT_MAX, char exit = '\0');

		template <typename T> static bool getNum(T &out, std::string exit, std::string prompt = "> ", std::string error = "Invalid input.", int min = INT_MIN, int max = INT_MAX);
		template <typename T> static bool getNum(T &out, char exit, std::string prompt = "> ", std::string error = "Invalid input.", int min = INT_MIN, int max = INT_MAX);
		template <typename T> static bool getNum(T &out, std::string prompt = "> ", std::string error = "Invalid input.", int min = INT_MIN, int max = INT_MAX);

	};

	class MathUtils {
	public:
		static int neg(int n);
	};

	class GenUtils {
	public:
		template <typename T>
		static void swap(T &a, T &b);

		static std::vector<std::string> split(std::string input, std::string splitter = " \t\n\v\f\r");
	};

	class ToddUtils{
	public:
		static std::string todd;
		static void createTodd();
	};

}

#include "utilslib_impl.h"
//Implementation file for template functions.