#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALS_COUNT 10

int main()
{
	Animal	**array_of_animals = new Animal* [ANIMALS_COUNT];
	
	for (int i = 0; i < ANIMALS_COUNT; i++)
		if(i % 2)
			array_of_animals[i] = new Dog();
		else
			array_of_animals[i] = new Cat();

	for (int i = 0; i < ANIMALS_COUNT; i++)
	{
		array_of_animals[i]->makeSound();
		delete array_of_animals[i];
		std::cout << std::endl;
	}

	delete [] array_of_animals;	
	return 0;
}
