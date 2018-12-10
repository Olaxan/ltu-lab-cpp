#include "pool.h"

namespace efiilj
{
	PoolItem::PoolItem() { }
	PoolItem::PoolItem(efiilj::Vehicle vehicle, int total) : vehicle(vehicle), _total(total), _current(total) { }

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
}