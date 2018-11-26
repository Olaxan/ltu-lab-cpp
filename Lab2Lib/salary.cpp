#include "lab2lib.h"

namespace efiilj {

	double Lab2::average_salary(int count, int* employees) {
		double total = 0;

		for (int i = 0; i < count; i++) {
			total += *(employees + i);
		}

		return total / count;

	}

}