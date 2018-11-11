#pragma once
#include <string>

namespace efiilj {
	class IOUtils {
	public:
		// Asks the user for an integer until one is input.
		static int askInt(std::string prompt, std::string error);
		static int askInt(std::string prompt, std::string error, char exit);
		static int askInt(std::string prompt, std::string error, int min, int max);
		static int askInt(std::string prompt, std::string error, int min, int max, char exit);
	};

	class MathUtils {
	public:
		static int neg(int n);
	};
}