#include "lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

namespace efiilj {

	void Lab1::pyramid(int n) {

		for (int i = 1; i <= n; i++) {

			for (int j = 1; j <= i; j++)
			{
				printf_s("%i", j);
			}

			printf_s("\n");

		}
	}

	void Lab1::pyramid(char c) {

		for (int i = 0; i <= (toupper(c) - 'A'); i++) {
			printf_s(string(i + 1, 'A' + i).c_str());
			printf_s("\n");
		}

	}

}

