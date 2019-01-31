#pragma once

#include <type_traits>
#include <sstream>

namespace efiilj
{
	template <typename From, typename To>
	struct is_sstream_convertible 

	template <typename T, typename = typename std::enable_if<std::is_convertible<std::stringstream, T>::value, T>::type>
	class UserInput
	{
	public:
		UserInput();
		~UserInput();
	};

}

