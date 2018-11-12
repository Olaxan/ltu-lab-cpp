// Pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;
using namespace efiilj;

void pyramid(int n);
void pyramid(char n);

int main()
{

	char input;

	printf_s("Enter the number/character you want printed in the last row.\n> ");
	scanf_s(" %c", &input);

	if (isdigit(input)) {
		pyramid((int)input - '0');
	}
	else {
		pyramid(input);
	}
}

void pyramid(int n) {

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= i; j++)
		{
			printf_s("%i", j);
		}

		printf_s("\n");

	}
}

void pyramid(char c) {

	for (int i = 0; i <= (toupper(c) - 'A'); i++) {
		printf_s(string(i + 1, 'A' + i).c_str());
		printf_s("\n");
	}

}
