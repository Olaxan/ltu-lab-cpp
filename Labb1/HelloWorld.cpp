#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

void helloWorld()
{
	string input;
	int rep;

	cout << "How many times do you wish to greet the world?" << endl;
	
	do
	{
		cout << "Enter a number: ";
		getline(cin, input);
		stringstream(input) >> rep;
		cout << rep;

	} while (!isdigit(rep));


}