#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog& dog);
	~Dog();

	Dog&	operator=(const Dog& dog);
	void	makeSound(void) const;
};
