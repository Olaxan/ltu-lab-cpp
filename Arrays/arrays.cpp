// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "utilslib.h"
#include "matrix.h"

#include <iostream>
#include <cstdlib>

using namespace std;
using namespace efiilj;

int main()
{
	int width = IOUtils::askInt("Enter X dimension: ", "Please enter an integer.");
	int height = IOUtils::askInt("Enter Y dimension: ", "Please enter an integer.");

	matrix mat = matrix(width, height);

	for (int i = 0; i < mat.width * mat.height; i++) {
		*mat.index(i) = rand() % 10;
	}

	for (int y = 0; y < mat.height; y++) {
		mat.printRow(y);
		printf("%i", mat.getRowSum(y));
		cout << endl;
	}

	for (int x = 0; x < mat.width; x++) {
		printf("%i\t", mat.getColSum(x));
	}

	printf("%i", mat.getSum());

	return 0;
}
