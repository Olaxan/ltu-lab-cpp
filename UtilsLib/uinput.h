#pragma once

#include <limits>
#include <type_traits>
#include <sstream>
#include <string>
#include <iostream>

namespace efiilj
{

	template<class, class = std::void_t<>>
	struct is_streamable : std::false_type {};

	template<class T>
	struct is_streamable<T,
		std::void_t<decltype(std::declval<std::istream&>() >> std::declval<T&>())>
	> : std::true_type { };

	template <typename T>
	class UserInput
	{
	private:
		char* _error;
		char* _prompt;
		char* _query;
		bool _state;
		T _value, _min, _max;

		bool Validate(char* input);

		template<typename T>
		typename std::enable_if<
			std::is_arithmetic<T>::value
		>::type
			TestLimits() { return (_value >= _min && _value <= _max); }

		template<typename T>
		typename std::enable_if<
			!std::is_arithmetic<T>::value
		>::type
			TestLimits() { return true; }

	public:
		UserInput(char* query, char* prompt);

		template <typename = std::enable_if_t<std::is_arithmetic<T>::value>>
		UserInput(char* query, char* prompt, T min, T max);

		template <typename = std::enable_if_t<std::is_arithmetic<T>::value>>
		inline void Limits(T min, T max)
		{
			_min = min;
			_max = max;
		}

		bool Show(); // Non-comparable

		T Value() { return _value; };

		bool operator == (bool state);
		bool operator != (bool state);

		~UserInput();
	};
}

#include "uinput_impl.h"

