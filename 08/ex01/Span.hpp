#pragma once

#include <iostream>
#include <iterator>
#include <stdint.h>
#include <cmath>
#include <set>

class Span
{
private:
	size_t				_max_size;
	std::set<int>		_values;

	Span();

public:
	Span(unsigned int n);
	Span(const Span& copy);
	~Span();

	Span& operator=(const Span& copy);

	void addNumber(int n);
	int shortestSpan() const; 	
	int longestSpan() const;
};
