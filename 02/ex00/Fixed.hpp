#pragma once

#include <iostream>

class Fixed
{
private:
    int              value;
    static const int fractional_bits = 8;

public:
    Fixed();
    Fixed(const Fixed& obj);
    Fixed&	operator=(const Fixed &obj);
	~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};