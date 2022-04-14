#include "Animal.hpp"

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Animal is created." << std::endl;
}

Animal::Animal(const Animal& animal)
{
	operator=(animal);
	std::cout << "Animal is copied." << std::endl;
}

Animal::~Animal()
{std::cout << "Animal is destroyed." << std::endl;}

Animal&	Animal::operator=(const Animal& animal)
{
	_type = animal._type;
	return *this;
}

std::string Animal::getType() const
{return _type;}

void Animal::makeSound(void) const
{std::cout << "animal can`t make sound." << std::endl;}
