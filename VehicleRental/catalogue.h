#pragma once

#include "vehicle.h"

#include <vector>
#include <set>

namespace efiilj
{

	class Catalogue
	{
	private:
		std::vector<efiilj::Vehicle> _vehicles;
		std::set<efiilj::Vehicle> _vehicleTemplates;
		std::string _name;
	public:
		Catalogue();
		Catalogue(std::string name);

		void addVehicle();
		void addVehicle(efiilj::Vehicle vehicle);
		void addVehicle(efiilj::Vehicle vehicle, float costPerHour);

		efiilj::Vehicle findVehicle();

		~Catalogue();
	};

}


