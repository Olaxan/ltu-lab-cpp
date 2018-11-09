#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{

	string input;
	int rep;

	cout << "Hello World!\n";
	cout << "How many times do you wish to greet the world?" << endl << "> ";

	while (true) {

		cin >> input;
		try
		{
			rep = stoi(input);
			break;
		}
		catch (const std::invalid_argument&)
		{
			cout << "Please enter a NUMBER:" << endl << "> ";
		}
	}

	for (int i = 0; i < rep; i++)
	{
		cout << "Hello world" << string(i + 1, '!') << endl;
	}

}
