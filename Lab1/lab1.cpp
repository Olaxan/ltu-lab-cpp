#include "..\Lab1Lib\lab1lib.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

int main() {

	bool run = true;
	int select;

	do
	{
		printf("Assignment 1 menu:\n\n"
			"1. Primes\n"
			"2. Bounce\n"
			"3. Pyramid\n"
			"4. Arrays\n"
			"5. Arithmetic and Output\n"
			"6. Mortgage Calculator\n"
			"0. Exit\n");

		select = efiilj::IOUtils::getInt("> ", "Please select a number between 0-6", 0, 6);

		switch (select) {
		case 0:
			run = false;
			break;

		case 1:
			printf("How many primes do you want to calculate?\nThis operation may take a very long time to complete for large numbers.\n");
			efiilj::Lab1::prime(
				efiilj::IOUtils::getInt()
			);
			break;

		case 2:
			printf("How many numbers do you want to bounce?\n");
			efiilj::Lab1::bounce(
				efiilj::IOUtils::getInt()
			);
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
			efiilj::Lab1::arrays(
				efiilj::IOUtils::getInt("Enter X dimension: "),
				efiilj::IOUtils::getInt("Enter Y dimension: ")
			);
			break;

		case 5:
			printf("How many people do you want to feed?\n");
			efiilj::Lab1::cake(
				efiilj::IOUtils::getInt()
			);
			break;

		case 6:
			int amount, interest, years;

			printf("Please enter the following information about your loan:\nAmount borrowed, loan interest, and years to repay.\n");

			amount = efiilj::IOUtils::getInt("AMOUNT: ");
			interest = efiilj::IOUtils::getInt("INTEREST [0 - 100]: ");
			years = efiilj::IOUtils::getInt("YEARS: ");

			efiilj::Lab1::cost(amount, interest, years);
			break;

		}

		printf("\n");

	} while (run);

	
}