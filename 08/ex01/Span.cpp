#include "Span.hpp"

Span::Span(unsigned int n)
	: _max_size(n)
{}

Span::Span(const Span& copy)
{
	operator=(copy);
}

Span::~Span()
{}

Span& Span::operator=(const Span& copy)
{
	_max_size = copy._max_size;
	_values = copy._values;
	return *this;
}

void Span::addNumber(const int n)
{
	if (_values.size() >= _max_size)
		throw std::length_error("span is full");
	_values.insert(n);
}

int Span::shortestSpan() const
{
	std::set<int>::iterator it_set = _values.begin();
	int min = INT32_MAX;
	if (_values.size() < 2)
		throw std::exception();
	while(1)
	{
		int temp = *it_set;
		it_set++;
		if(it_set == _values.end() || !min)
			break;
		if(*it_set - temp < min)
			min = *it_set - temp;
	}
	return (min);
}

int Span::longestSpan() const
{
	if (_values.size() < 2)
		throw std::exception();
	return (*_values.crbegin() - *_values.begin());
}
