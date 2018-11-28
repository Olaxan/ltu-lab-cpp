#include "..\UtilsLib\utilslib.h"
#include "..\LabLib\lablib.h"
#include "car.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

	int select;

	cout <<"ASSIGNMENT 2 menu:\n\n"
		<< "1. Length\n"
		<< "2. Swap 1\n"
		<< "3. Swap 2\n"
		<< "4. Salary\n"
		<< "5. Car\n"
		<< "0. Exit\n";

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
				break;
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
				cout << ", b: " << b << "\n";
				break;
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
				efiilj::Lab2::swapPtr<string>(&aa, &bb);
				cout << "a: " << *aa;
				cout << ", b: " << *bb << "\n";
				break;
			}
			case 4:
			{
				int numEmployees;

				cout << "Enter number of employees.\n";
				if (efiilj::IOUtils::getNum<int>(numEmployees, '0')) {
					double* arr = new double[numEmployees];
					for (int i = 0; i < numEmployees; i++)
					{
						string prompt = "User " + to_string(i + 1) + ": ";
						if (efiilj::IOUtils::getNum<double>(arr[i], prompt))
							continue;

						arr[i] = 0;
					}

					cout << "\nAverage salary for " << numEmployees << " employees: ";
					cout << efiilj::Lab2::average_salary<double>(numEmployees, arr);
					cout << ":-\n";

					delete arr;
					break;
				}
				
			}
			case 5:
			{
				efiilj::Car::build();
				break;
			}
			default:
			{
				cout << "Please select an item 0-4.";
			}
		}

		cout << "\n";

	}

}