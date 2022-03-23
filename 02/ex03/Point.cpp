#include "Point.hpp"

Point::Point()
	: _x(0), _y(0){}

Point::Point(const Fixed x, const Fixed y)
	: _x(x), _y(y){}

Point::Point(const Point& point)
	: _x(point._x), _y(point._y){}

Point&	Point::operator=(const Point& point)
{
	_x = point._x;
	_y = point._y;
	return *this;
}

Point::~Point()
{}

Fixed	Point::getX(void) const
{return _x;}

Fixed	Point::getY(void) const
{return _y;}

std::ostream&	operator<<(std::ostream& stream, const Point& point)
{
	stream << "(" << point.getX() << "; " << point.getY() << ")";
	return stream;
}
