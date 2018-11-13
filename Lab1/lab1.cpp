#include "..\Lab1Lib\lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

int main() {

	int select;

	printf("ASSIGNMENT 1 menu:\n\n"
		"1. Primes\n"
		"2. Bounce\n"
		"3. Pyramid\n"
		"4. Arrays\n"
		"5. Arithmetic and Output\n"
		"6. Mortgage Calculator\n"
		"0. Exit\n");

	while (efiilj::IOUtils::get<int>(select, "> ", "Please select an integer between 0-6", 1, 6, '0'))
	{

		switch (select) {
		case 1:
			int p;

			printf("How many primes do you want to calculate?\nThis operation may take a very long time to complete for large numbers.\n");
			if (efiilj::IOUtils::get<int>(p), '0')
				efiilj::Lab1::prime(p);
			break;

		case 2:
			int b;

			printf("How many numbers do you want to bounce?\n");
			if (efiilj::IOUtils::get<int>(b), '0')
				efiilj::Lab1::bounce(b);
			break;

		case 3:
			char c;

			printf("Enter the character/number you want in the last row of the pyramid.\n> ");
			scanf_s(" %c", &c);
			if (isdigit(c))
				efiilj::Lab1::pyramid(c - '0');
			else
				efiilj::Lab1::pyramid(c);
			break;

		case 4:
			int x, y;

			if (efiilj::IOUtils::get<int>(x, "Enter X dimension: ") && efiilj::IOUtils::get<int>(y, "Enter Y dimension: "))
				efiilj::Lab1::arrays(x, y);
			break;

		case 5:
			int f;

			printf("How many people do you want to feed?\n");
			if (efiilj::IOUtils::get<int>(f))
				efiilj::Lab1::cake(f);
			break;

		case 6:
			float amount, interest, years;

			printf("Please enter the following information about your loan:\nAmount borrowed, loan interest, and years to repay.\n");

			efiilj::IOUtils::get<float>(amount, "AMOUNT: ");
			efiilj::IOUtils::get<float>(interest, "INTEREST [0 - 1]: ");
			efiilj::IOUtils::get<float>(years, "YEARS: ");

			efiilj::Lab1::cost(amount, interest, years);
			break;

		}

		printf("\n");

	}

	
}