#include "Karen.hpp"

Karen::Karen()
{}

Karen::~Karen()
{}

void    Karen::debug( void )
{
	std::cout << "I love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
			<< "\nI really do!" << std::endl;
}

void    Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			<< "You didn't put enough bacon in my burger!"
			<< "If you did, I wouldn't be asking for more!" << std::endl;
}

void    Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			<< "I've been coming for years whereas you started "
			<< "working here since last month." << std::endl;
}

void    Karen::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

int  get_lvl(std::string level)
{
	const std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};

	for (int i = 0; !names[i].empty(); i++)
	{
		if (!level.compare(names[i]))
			return i + 1;
	}
	return -1;
}

void    Karen::complain(std::string level)
{
	switch(get_lvl(level))
	{
		case 1: debug(); break;
		case 2: info(); break;
		case 3: warning(); break;
		case 4: error(); break;
	}
}
