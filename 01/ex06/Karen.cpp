#include "Karen.hpp"

void    Karen::debug( void )
{
	std::cout << "\n[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
			<< "\nI really do!" << std::endl;
}

void    Karen::info( void )
{
	std::cout << "\n[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			<< "You didn't put enough bacon in my burger! "
			<< "If you did, I wouldn't be asking for more!" << std::endl;
}

void    Karen::warning( void )
{
	std::cout << "\n[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			<< "I've been coming for years whereas you started "
			<< "working here since last month." << std::endl;
}

void    Karen::error( void )
{
	std::cout << "\n[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void  Karen::defaultAnswer()
{
	std::cout << "[ Probably complaining about insignificant problems ]";
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
		case 1: debug();
		case 2: info();
		case 3: warning();
		case 4: error(); break;
		default: defaultAnswer(); break;
	}
}
