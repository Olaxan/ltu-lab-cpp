#include "vehicle.h"

//Implement hashing functions
namespace std
{
	template <>
	struct hash<efiilj::Vehicle>
	{
		size_t operator()(const efiilj::Vehicle& v) const
		{
			// http://stackoverflow.com/a/1646913/126995
			size_t res = 17;
			res = res * 31 + hash<string>()(v.model);
			res = res * 31 + hash<float>()(v.costPerHour);
			res = res * 31 + hash<float>()(v.fuelConsumption);
			res = res * 31 + hash<int>()(v.capacity);
			return res;
		}
	};
}

namespace efiilj
{
	Vehicle::Vehicle() { }

	Vehicle::Vehicle(const Vehicle& copy)
	{
		this->model = copy.model;
		this->costPerHour = copy.costPerHour;
		this->fuelConsumption = copy.fuelConsumption;
		this->capacity = copy.capacity;
	}

	Vehicle::Vehicle(std::string modelName, float costPerHour, float fuelConsumption, int capacity) :
		model(modelName), costPerHour(costPerHour), fuelConsumption(fuelConsumption), capacity(capacity) { }



	bool Vehicle::operator < (const Vehicle& other) const
	{
		return (this->costPerHour < other.costPerHour);
	}

	bool Vehicle::operator == (const Vehicle& other) const
	{
		return (std::hash<efiilj::Vehicle>()(*this) == std::hash<efiilj::Vehicle>()(other));
	}

	bool Vehicle::operator != (const Vehicle& other) const
	{
		return (std::hash<efiilj::Vehicle>()(*this) != std::hash<efiilj::Vehicle>()(other));
	}

	efiilj::Vehicle::~Vehicle() { }
}


