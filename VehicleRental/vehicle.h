#pragma once

#include <string>

namespace efiilj
{

	class Vehicle
	{	
	public:
		Vehicle();
		Vehicle(const Vehicle &copy);
		Vehicle(std::string modelName, float costPerHour, float fuelConsumption, int capacity);

		std::string model = "Undefined";
		float costPerHour = 0;
		float fuelConsumption = 0;
		int capacity = 0;

		bool operator < (const Vehicle& other) const;
		bool operator == (const Vehicle& other) const;
		bool operator != (const Vehicle& other) const;

		virtual ~Vehicle();
	};

}

