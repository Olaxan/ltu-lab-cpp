#pragma once

#include <algorithm>
#include <sstream>
#include <iostream>

namespace efiilj
{
	template <typename T>
	SortedArray<T>::SortedArray()
	{
		_items = new T[0];
		_count = 0;
	}

	template <typename T>
	void SortedArray<T>::addAt(int index, T value)
	{
		resize(_count + 1);
		memmove(_items + index + 1, _items + index, sizeof(T) * (_count - index));
		_items[index] = value;
		_count++;
	}

	template <typename T>
	void SortedArray<T>::remAt(int index)
	{
		memmove(_items + index, _items + index + 1, sizeof(T) * (_count - index));
		_count--;
	}

	template <typename T>
	T SortedArray<T>::getAt(int index)
	{
		return *(_items + sizeof(T) * index);
	}

	template <typename T>
	void SortedArray<T>::resize(int newSize)
	{
		T* _new = new T[newSize];
		memcpy_s(_new, newSize * sizeof(T), _items, _count * sizeof(T));
		delete[] _items;
		_items = _new;
	}

	template <typename T>
	int SortedArray<T>::find(T value)
	{
		for (int i = 0; i < _count; i++)
		{
			if (_items[i] == value)
				return i;
		}

		return -1;
	}

	template <typename T>
	bool SortedArray<T>::exists(T value)
	{
		for (int i = 0; i < _count; i++)
		{
			if (_items[i] == value)
				return true;
		}

		return false;
	}

	template <typename T>
	void SortedArray<T>::insert(T value)
	{
		for (int i = 0; i < _count; i++)
		{
			if (_items[i] < value)
			{
				addAt(i, value);
				return;
			}
		}
		addAt(_count, value);
	}

	template <typename T>
	void SortedArray<T>::remove(T value)
	{
		int countBefore = _count;

		for (int i = 0; i < countBefore; i++)
		{
			if (*(_items + sizeof(T) * i) == value)
			{
				remAt(i);
			}
		}
	}

	template <typename T>
	std::string SortedArray<T>::to_string()
	{
		std::stringstream ss;
		ss << "[";

		for (int i = 0; i < _count; i++)
		{
			ss << _items[i];
			if (i < _count - 1)
				ss << ", ";
		}

		ss << "]";

		return ss.str();
	}

	template <typename T>
	int SortedArray<T>::count()
	{
		return _count;
	}

}