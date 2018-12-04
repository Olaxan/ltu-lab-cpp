#include "pool.h"
#include "..\UtilsLib\utilslib.h"

#include <iostream>

using namespace std;

namespace efiilj
{

	Pool::Pool() : _name("Unnamed") { }
	Pool::Pool(std::string name) : _name(name) { }

	void Pool::addVehicle()
	{
		cout << "Choose a pre-made vehicle template, or create a new: \n\n";
		
		int i = 1;
		for (auto it = _vehicleTemplates.begin(); it != _vehicleTemplates.end(); it++)
		{
			std::cout << i << ". " << it->model << std::endl;
			i++;
		}

		cout << "0. Register New";
	}

	void Pool::addVehicle(efiilj::Vehicle vehicle)
	{
		this->_vehicleTemplates.insert(vehicle);
	}

	void Pool::addVehicle(efiilj::Vehicle vehicle, float costPerHour)
	{
		this->_vehicleTemplates.insert(vehicle);
		efiilj::Vehicle v = efiilj::Vehicle(vehicle);
		v.costPerHour = costPerHour;
		//this->_vehicles.push_back(v);
	}


	Pool::~Pool() { }

}

