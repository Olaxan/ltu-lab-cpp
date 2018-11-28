#pragma once
#include "lab2lib.h"

namespace efiilj {

	template <typename T>
	void Lab2::swapVal(T* a, T* b)
	{
		T temp = *a;
		*a = *b;
		*b = temp;
	}

	template <typename T>
	void Lab2::swapPtr(T** a, T** b)
	{
		swapVal(a, b);
	}

	template <typename T>
	T Lab2::average_salary(int count, T* employees)
	{
		T total = 0;

		for (int i = 0; i < count; i++) {
			total += *(employees + i);
		}

		return total / count;

	}

}