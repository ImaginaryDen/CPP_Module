#pragma once

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	Fixed 	_x;
	Fixed	_y;

public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(const Point& point);
	Point&	operator=(const Point& point);
	~Point();

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream&	operator<<(std::ostream& stream, const Point& point);
