#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is destroyed." << std::endl;
}

Brain::Brain(const Brain& brain)
{
	operator=(brain);
	std::cout << "Brain is copied." << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
	return *this;
}
