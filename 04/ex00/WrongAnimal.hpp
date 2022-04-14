#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal(std::string type = "None");
	WrongAnimal(const WrongAnimal& animal);
	~WrongAnimal();
	
	WrongAnimal&	operator=(const WrongAnimal& animal);
	std::string		getType() const;
	void			makeSound() const;
};
