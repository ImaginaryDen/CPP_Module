#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
	std::cout << "WrongAnimal is created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	operator=(animal);
	std::cout << "WrongAnimal is copied." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
	_type = animal._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal can`t make sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}
