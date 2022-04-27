#pragma once

#include <algorithm>

template <typename T>
int easyfind(T container, int n)
{
	for (size_t i = 0; i < container.size(); i++)
		if(container[i] == n)
			return container[i];
	throw std::exception();
}