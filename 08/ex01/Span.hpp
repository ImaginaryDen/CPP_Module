#pragma once

#include <iostream>
#include <iterator>
#include <stdint.h>
#include <cmath>
#include <set>
#include <vector>

class Span
{
private:
	size_t				_max_size;
	std::multiset<int>		_values;

public:
	Span(unsigned int n = 0);
	Span(const Span& copy);
	~Span();

	Span& operator=(const Span& copy);

	void addNumber(const int n);
	template <typename T>
	void addNumber(T iter_begin, T iter_end);
	int shortestSpan() const; 	
	int longestSpan() const;
};

template <typename T>
void Span::addNumber(T iter_begin, T iter_end)
{
	while (iter_begin != iter_end)
	{
	addNumber(*iter_begin);
	iter_begin++;
	}
}