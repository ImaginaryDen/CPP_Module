#pragma once

#include <string>
#include <iostream>

class Karen
{
private:
	void    debug( void );
	void    info( void );
	void    warning( void );
	void    error( void );
	void	defaultAnswer(void);

public:
	void complain( std::string level );
};
