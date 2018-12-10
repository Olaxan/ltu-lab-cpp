#include "pool.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>
#include <algorithm>

using namespace std;

namespace efiilj
{

	Pool::Pool() : _name("Unnamed") { }
	Pool::Pool(std::string name) : _name(name) { }

	void Pool::addVehicle()
	{
		Vehicle v;
		int count;
		if (showAddVehicleDialog(v) && IOUtils::getNum<int>(count, "Count: ", "Error: Positive values only.", 0))
		{
			addVehicle(v, count);
		}
	}

	void Pool::addVehicle(Vehicle vehicle, int count)
	{
		this->_vehicleTemplates.push_back(vehicle);

		PoolItem item = PoolItem(vehicle, count);
		this->_vehicles.push_back(item);
	}

	void Pool::addVehicle(Vehicle vehicle, int count, float costPerHour)
	{
		this->_vehicleTemplates.push_back(vehicle);

		PoolItem item = PoolItem(vehicle, count);
		item.vehicle.costPerHour = costPerHour;
		this->_vehicles.push_back(item);
	}

	bool Pool::showAddVehicleDialog(Vehicle& vehicle)
	{

		cout << "Choose a pre-made vehicle template, or create a new: \n\n";

		listTemplates();

		cout << this->count() + 1 << ". Register New\n";
		cout << "0. Exit\n";

		int select;
		if (IOUtils::getNum<int>(select, "> ", "Invalid input.", 0, count() + 1) && select != 0)
		{

			std::string type;
			int capacity;
			float cost, fuel;

			if (select == this->count() + 1)
			{
				cout << "Type: ";
				getline(cin, type);

				IOUtils::getNum<float>(cost, "Rental cost: ", "Error: Positive values only.", 0);
				IOUtils::getNum<float>(fuel, "Fuel efficiency: ", "Error: Positive values only.", 0);
				IOUtils::getNum<int>(capacity, "Seat capacity: ", "Error: Positive integers only.", 0);

				if (type.length() > 0)
				{
					vehicle = Vehicle(type, cost, fuel, capacity);
					return true;
				}
			}
			else
			{
				vehicle = _vehicleTemplates[select - 1];
				return true;
			}
		}

		return false;
	}

	void Pool::listTemplates()
	{
		if (count() == 0)
			cout << "No templates available.\n";
		else
		{
			for (int i = 0; i < _vehicleTemplates.size(); i++)
			{
				cout << i + 1 << ". " << _vehicleTemplates[i].model << "\n";
			}
		}
		cout << "\n";
	}

	int Pool::count()
	{
		return _vehicles.size();
	}

	Vehicle Pool::findVehicle()
	{
		return Vehicle();
	}


	Pool::~Pool() { }

}

