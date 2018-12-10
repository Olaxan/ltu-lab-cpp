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

		bool rentVehicle(int count = 1);
		bool returnVehicle(int count = 1);

		const int& total() const;
		bool total(const int& total);

		PoolItem& operator -= (int count);
		PoolItem& operator += (int count);

		const int& available() const { return _current; }
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

		PoolItem* findSingleVehicle(Vehicle vehicle);
		std::vector<PoolItem*> findVehicles(int capacity, float costPerHour);

		bool vehicleExists(const Vehicle& vehicle) const;
		bool templateExists(const Vehicle& vehicle) const;

		bool rentVehicle(PoolItem &item, int count = 1);
		bool returnVehicle(PoolItem &item, int count = 1);

		bool showAddVehicleDialog(Vehicle& vehicle);

		void listTemplates();
		int count();


		~Pool();
	};
}


