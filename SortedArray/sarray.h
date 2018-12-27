#pragma once

#include <string>

namespace efiilj
{

	template <typename T>
	class SortedArray
	{
	private:
		T* _items;
		int _count;

		void addAt(int index, T value);
		void remAt(int index);
		T getAt(int index);

		void resize(int newSize);

	public:

		SortedArray();

		int	find(T value);
		bool exists(T value);
		void insert(T value);
		void remove(T value);

		std::string to_string();

		int count();

		~SortedArray() { delete[] _items; }

	};

}

#include "sarray_impl.h"

