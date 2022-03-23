#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(int value)
{
	_value = (value << _fractional_bits);
}

Fixed::Fixed(float value)
{
	_value = roundf(value * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed& obj)
{
	_value = obj.getRawBits();
}

Fixed::~Fixed()
{}

/* ======================================================= */

Fixed&	Fixed::operator=(const Fixed& obj)
{
	_value = obj.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed& obj) const
{return _value > obj._value;}

bool	Fixed::operator<(const Fixed& obj) const
{return _value < obj._value;}

bool	Fixed::operator>=(const Fixed& obj) const
{return _value >= obj._value;}

bool	Fixed::operator<=(const Fixed& obj) const
{return _value <= obj._value;}

bool	Fixed::operator==(const Fixed& obj) const
{return _value == obj._value;}

bool	Fixed::operator!=(const Fixed& obj) const
{return _value != obj._value;}

/* ======================================================= */

Fixed&	Fixed::operator+=(const Fixed& obj)
{
	_value += obj._value;
	return *this;
}

Fixed&	Fixed::operator-=(const Fixed& obj)
{
	_value -= obj._value;
	return *this;
}

Fixed&	Fixed::operator*=(const Fixed& obj)
{
	long	copy;

	copy = (long)_value;
	copy *= obj._value;
	copy >>= _fractional_bits;
	_value = (int)copy;
	return (*this);
}

Fixed&	Fixed::operator/=(const Fixed& obj)
{
	long	a;
	long	b;

	a = _value << (_fractional_bits);
	b = obj._value;
	a /= b;
	_value = (int)a;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	Fixed	result(*this);

	return result += obj;
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	Fixed	result(*this);

	return result -= obj;
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	Fixed	result(*this);

	return result *= obj;
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	Fixed	result(*this);

	return result /= obj;
}

Fixed&	Fixed::operator++()
{
	_value += 1;
	return *this;
}

Fixed&	Fixed::operator--()
{
	_value -= 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);

	_value += 1;
	return copy;
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);

	_value += 1;
	return copy;
}


/* ======================================================= */

int		Fixed::toInt(void) const
{
	return _value >> _fractional_bits;
}

float	Fixed::toFloat(void) const
{
	return (float)_value / (1 << _fractional_bits);
}

int     Fixed::getRawBits( void ) const
{
	return _value;
}

void    Fixed::setRawBits( int const raw )
{
	_value = raw;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b;
}

/* ======================================================= */

std::ostream&	operator<<(std::ostream& stream, const Fixed& obj)
{
	stream << obj.toFloat();
	return stream;
}
