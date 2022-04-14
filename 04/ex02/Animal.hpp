#pragma once

#include <string>
#include <iostream>

class  Animal
{
protected:
	std::string	_type;

public:
	Animal(std::string type = "None");
	Animal(const Animal& animal);
	virtual ~Animal() = 0;

	Animal&			operator=(const Animal& animal);
	std::string		getType() const;
	virtual void	makeSound(void) const = 0;
};
