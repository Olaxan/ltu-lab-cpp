// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UTILSLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UTILSLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#pragma once

#ifdef UTILSLIB_EXPORTS
#define UTILSLIB_API __declspec(dllexport)
#else
#define UTILSLIB_API __declspec(dllimport)
#endif

#include <type_traits>
#include <string>
#include <vector>

namespace efiilj {

	class UTILSLIB_API IOUtils {
	public:
		template <typename T>
		static bool Input(T &out, bool exit, std::string prompt);

		template <typename T>
		static bool Input(T &out, bool exit, std::string prompt, int min, int max);

	};

	class UTILSLIB_API MathUtils {
	public:
		static int Neg(int n);
	};

	class UTILSLIB_API GenUtils {
	public:
		template <typename T> static void Swap(T &a, T &b);

		//static std::vector<std::string> Split(std::string input, std::string splitter = " \t\n\v\f\r");
	};

	class UTILSLIB_API ToddUtils {
	public:
		static void Todd();
	};

}


#include "utilslib_impl.h"
//Implementation file for template functions.