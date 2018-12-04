#include "pool.h"
#include "..\UtilsLib\menu.h"

#include <string>
#include <iostream>


void doToot()
{
	std::cout << "toot";
}

void doWank()
{
	std::cout << "WHANK";
}

void doSnek()
{
	std::cout << "<==========(:)-<";
}


int main()
{
	efiilj::Menu main = efiilj::Menu("Main Menu");
	main.addItem("Register a vehicle", doToot);
	main.addItem("Search registry", doWank);
	main.exit = "exit";
	main.show();
}