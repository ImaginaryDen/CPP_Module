#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "Cat is created." << std::endl;
}

Cat::Cat(const Cat& cat) : Animal::Animal()
{
	operator=(cat);
	_brain = NULL;
	std::cout << "Cat copied." << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	Animal::operator=(cat);
	if(_brain)
		delete _brain;
	_brain = new Brain(*cat._brain);
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat is destroyed." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
