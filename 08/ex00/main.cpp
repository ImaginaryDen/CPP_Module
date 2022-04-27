#include <iostream>
#include <vector>
#include "ft_find.hpp"

int main()
{
	std::vector<int> vec(10, 7);

	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	try
	{
		int n = easyfind(vec, 7);
		std::cout << n << std::endl;
	}catch(std::exception &e)
	{std::cout << e.what() << std::endl;}
	return 0;
};