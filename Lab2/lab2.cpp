#include "..\Lab2Lib\lab2lib.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

	string str = "Chimichangas";
	string a = "Boop";
	string b = "Beep";
	string* a_ptr = &a;
	string* b_ptr = &b;

	int count = 5;
	int salaries[] = { 10000, 50000, 39000, 40000, 28000 };

	cout << "TASK 1 - Length Of:\n";
	cout << "Length of '" << str << "' = " << efiilj::Lab2::length(str.c_str());

	cout << "\n\nTASK 2 - Swap 1 (swap by value):\n";
	cout << "a = " << a << "\nb = " << b << "\n";
	cout << "efiilj::Lab2::swapVal<string>(&a, &b);\n";
	efiilj::Lab2::swapVal<string>(&a, &b);
	cout << "a = " << a << "\nb = " << b;

	cout << "\n\nTASK 3 - Swap 2 (swap by pointer):\n";
	cout << "*a_ptr = " << *a_ptr << "\n*b_ptr = " << *b_ptr << "\n";
	cout << "efiilj::Lab2::swapVal<string>(a_ptr, b_ptr);\n";
	efiilj::Lab2::swapVal<string>(a_ptr, b_ptr);
	cout << "*a_ptr = " << *a_ptr << "\n*b_ptr = " << *b_ptr;

	cout << "\n\nTASK 4 - Average Salary:\n";
	cout << "5 employees - salaries are: 10000, 50000, 39000, 40000, 28000\n";
	cout << "Average salary is " << efiilj::Lab2::average_salary(5, salaries) << ".";
}