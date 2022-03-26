#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain("i'm cat");
	std::cout << "Cat is created." << std::endl;
}

Cat::Cat(const Cat& cat)
{
	operator=(cat);
	std::cout << "Cat copied." << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	Animal::operator=(cat);
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
	std::cout << _brain->GetIdea() << std::endl;
	std::cout << "Meow" << std::endl;
}
