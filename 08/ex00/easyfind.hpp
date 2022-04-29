#pragma once

#include <algorithm>

template <typename T>
int easyFind(T container, int n)
{
	typename T::iterator result = std::find(container.begin(), container.end(), n);
	if(result != container.end())
		return (*result);
	throw std::runtime_error("Number is not found.");
}