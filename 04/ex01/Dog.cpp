#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog is created." << std::endl;
}

Dog::Dog(const Dog& dog) : Animal::Animal()
{
	operator=(dog);
	std::cout << "Dog copied." << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	Animal::operator=(dog);
	delete _brain;
	_brain = new Brain(*dog._brain);
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog is destroyed." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
