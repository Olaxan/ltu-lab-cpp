#pragma once

#include "vehicle.h"

#include <vector>

namespace efiilj
{
	class PoolItem
	{
	private:
		int _total;
		int _current;
	public:
		PoolItem();
		PoolItem(Vehicle, int total);

		Vehicle vehicle;

		const int& total() const;
		bool total(const int& total);
	};

	class Pool
	{
	private:
		std::vector<PoolItem> _vehicles;
		std::vector<Vehicle> _vehicleTemplates;
		std::string _name;
	public:
		Pool();
		Pool(std::string name);

		void addVehicle();
		void addVehicle(Vehicle vehicle, int count);
		void addVehicle(Vehicle vehicle, int count, float costPerHour);

		bool showAddVehicleDialog(Vehicle& vehicle);

		void listTemplates();
		int count();

		Vehicle findVehicle();

		~Pool();
	};
}


