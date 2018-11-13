#include "lab1lib.h"
#include "matrix.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

namespace efiilj{

	void Lab1::arrays(int width, int height) {

		Matrix mat = Matrix(width, height);

		for (int i = 0; i < mat.width * mat.height; i++) {
			*mat.index(i) = rand() % 10;
		}

		for (int y = 0; y < mat.height; y++) {
			mat.printRow(y);
			printf("%i\n", mat.getRowSum(y));
		}

		for (int x = 0; x < mat.width; x++) {
			printf("%i\t", mat.getColSum(x));
		}

		printf("%i\n", mat.getSum());
	}

}