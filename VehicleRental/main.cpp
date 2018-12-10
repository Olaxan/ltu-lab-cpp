#include "pool.h"
#include "..\UtilsLib\menu.h"

#include <string>
#include <iostream>

efiilj::Pool pool = efiilj::Pool("Customers");

bool doAdd()
{
	pool.addVehicle();
	return false;
}

bool doFind()
{
	int capacity;
	float price;

	efiilj::IOUtils::getNum<float>(price, "Minimum capacity: ", "Enter an integer > 0", 0);
	pool.findVehicle();
	return true;
}

int main()
{
	

	efiilj::Menu mainMenu = efiilj::Menu("=====[ Main Menu ]=====");
	mainMenu.addItem("Register new vehicle", doAdd);
	mainMenu.addItem("Search vehicle registry", doFind);
	mainMenu.show();
}