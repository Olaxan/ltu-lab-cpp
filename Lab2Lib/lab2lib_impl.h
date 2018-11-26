#pragma once
#include "lab2lib.h"

namespace efiilj {

	template <typename T>
	void Lab2::swapVal(T* a, T* b) {
		T temp = *a;
		*a = *b;
		*b = temp;
	}

	template <typename T>
	void Lab2::swapPtr(T* a, T* b) {
		T* temp = a;
		a = b;
		b = temp;
	}

}