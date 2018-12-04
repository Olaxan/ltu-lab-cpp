#include "catalogue.h"

#include <iostream>

using namespace std;

namespace efiilj
{

	Catalogue::Catalogue() : _name("Unnamed") { }
	Catalogue::Catalogue(std::string name) : _name(name) { }

	void Catalogue::addVehicle()
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

	void Catalogue::addVehicle(efiilj::Vehicle vehicle)
	{
		this->_vehicleTemplates.insert(vehicle);
	}

	void Catalogue::addVehicle(efiilj::Vehicle vehicle, float costPerHour)
	{
		efiilj::Vehicle v = efiilj::Vehicle(vehicle);
		this->_vehicleTemplates.insert(v);
		v.costPerHour = costPerHour;
		this->_vehicles.push_back(v);
	}


	Catalogue::~Catalogue() { }

}

