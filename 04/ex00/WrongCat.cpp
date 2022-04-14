#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat is created." << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat)
	: WrongAnimal(cat)
{
	std::cout << "WrongCat is copied." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is deleted." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& cat)
{
	WrongAnimal::operator=(cat);
	return *this;
}

void		WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
