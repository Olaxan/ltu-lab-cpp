#include "pool.h"

#include <sstream>

namespace efiilj
{

	PoolItem::PoolItem() { }
	PoolItem::PoolItem(efiilj::Vehicle vehicle, int total) : vehicle(vehicle), _total(total), _current(total) { }

	bool PoolItem::rentVehicle(int count)
	{
		if (_current >= count)
		{
			_current -= count;
			return true;
		}
		else return false;
	}

	bool PoolItem::returnVehicle(int count)
	{
		if ((_current + count) <= _total)
		{
			_current += count;
			return true;
		}
		else return false;
	}

	std::string PoolItem::to_string()
	{
		std::stringstream ss;

		ss << vehicle.model
			<< " [ Qty: " << available()
			<< " | Seats: " << vehicle.capacity
			<< " | Cost/hr: " << vehicle.costPerHour
			<< " | Eff: " << vehicle.fuelConsumption
			<< " ]\n";

		return ss.str();
	}

	const int& PoolItem::total() const
	{
		return this->_total;
	}

	bool PoolItem::total(const int& total)
	{
		if (total > 0 && total >= _current)
		{
			this->_total = total;
			return true;
		}

		return false;
	}

	PoolItem& PoolItem::operator-=(int count)
	{
		this->_total -= count;
		this->_current -= count;
		return *this;
	}

	PoolItem& PoolItem::operator+=(int count)
	{
		this->_total += count;
		this->_current += count;
		return *this;
	}
}