#pragma once

#include "vehicle.h"

#include <vector>
#include <set>

namespace efiilj
{

	class Pool
	{
	private:
		std::vector< std::pair<efiilj::Vehicle, int> > _vehicles;
		std::set<efiilj::Vehicle> _vehicleTemplates;
		std::string _name;
	public:
		Pool();
		Pool(std::string name);

		void addVehicle();
		void addVehicle(efiilj::Vehicle vehicle);
		void addVehicle(efiilj::Vehicle vehicle, float costPerHour);

		efiilj::Vehicle findVehicle();

		~Pool();
	};
}


