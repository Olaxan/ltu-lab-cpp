#pragma once

namespace efiilj {

	class Lab2
	{
	public:
		static int length(const char* input);
		static double average_salary(int count, int* employees);

		template <typename T> static void swapVal(T* a, T* b);
		template <typename T> static void swapPtr(T* a, T* b);
	};

}

#include "lab2lib_impl.h"
