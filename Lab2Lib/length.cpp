#include "lab2lib.h"

namespace efiilj {

	int Lab2::length(const char* input) {
		int i = 0;

		while (*(input + i) != '\0') {
			i++;
		}

		return i;
	}

}