#include "..\UtilsLib\utilslib.h"
#include "..\Lab2Lib\lab2lib.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

	int select;

	printf("ASSIGNMENT 2 menu:\n\n"
		"1. Length\n"
		"2. Swap 1\n"
		"3. Swap 2\n"
		"4. Salary\n"
		"5. Car\n"
		"0. Exit\n");

	while (efiilj::IOUtils::getNum<int>(select, '0', "> ", "Please enter 0-5.", 0, 5))
	{

		switch (select)
		{
			case 1:
			{
				string s;
				cout << "Enter some text to get the number of characters.\n> ";
				getline(cin, s);
				cout << "Length of '" << s << "': " << efiilj::Lab2::length(s.c_str()) << "\n";
			}
			case 2:
			{
				string a, b;

				cout << "a: ";
				getline(cin, a);
				cout << "b: ";
				getline(cin, b);
				cout << "SWAP by value!\n";
				efiilj::Lab2::swapVal<string>(&a, &b);
				cout << "a: " << a;
				cout << "b: " << b;
			}
			case 3:
			{
				string a, b;
				string *aa, *bb;

				cout << "a: ";
				getline(cin, a);
				cout << "b: ";
				getline(cin, b);
				aa = &a;
				bb = &b;
				cout << "SWAP by pointer!\n";
				efiilj::Lab2::swapPtr<string>(aa, bb);
				cout << "a: " << *aa;
				cout << "b: " << *bb;
			}
			case 4:
			{
				int i = 0;

				cout << "Enter any number of salaries to get average.\nEnter 0 to calculate.\n";
				while (efiilj::IOUtils::getNum<float>())
				{

				}
			}
			default:
			{
				cout << "Please select an item 0-4.";
			}
		}

		cout << "\n";

	}

}