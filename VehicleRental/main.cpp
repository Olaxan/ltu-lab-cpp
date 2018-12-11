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

	if (efiilj::IOUtils::getNum<float>(price, '0', "Max price: ") && efiilj::IOUtils::getNum<int>(capacity, "Min capacity: "))
	{
		vector<efiilj::PoolItem*> matches = pool.findVehicles(capacity, price);

		cout << "\n" << matches.size() << " matches:\n\n";

		if (matches.size() > 0)
		{
			int select, count;
			efiilj::Vehicle vehicle;

			for (unsigned int i = 0; i < matches.size(); i++)
			{
				vehicle = matches[i]->vehicle;

				cout << (i + 1) << ". " << vehicle.model
					<< " [ Qty: " << matches[i]->available()
					<< " | Seats: " << vehicle.capacity
					<< " | Cost/hr: " << vehicle.costPerHour
					<< " | Eff: " << vehicle.fuelConsumption
					<< " ]\n";
			}

			if (efiilj::IOUtils::getNum<int>(select, '0', "\nRent vehicle?\n> ", 1, matches.size()) && efiilj::IOUtils::getNum<int>(count, '0', "Quantity: ", 1)) {
				if (matches[select - 1]->rentVehicle(count))
					cout << "\nVehicle selected for rental.\n";
				else
					cout << "\nUnable to select vehicle for rental (not available).\n";

				cout << "Please speak with an AVIS representative for further assistance.\n";
			}
		}
	}
	return false;
}

int main()
{
	efiilj::Menu mainMenu = efiilj::Menu("=====[ Main Menu ]=====");
	mainMenu.addItem("Register new vehicle", doAdd);
	mainMenu.addItem("Search vehicle registry", doFind);
	mainMenu.show();
}