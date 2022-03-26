#include "Brain.hpp"

Brain::Brain(std::string idea)
{
	_idea = idea;
	std::cout << "Brain is created." << std::endl;
}
std::string Brain::GetIdea() const
{return _idea;}

Brain::~Brain()
{std::cout << "Brain is deleted." << std::endl;}

Brain::Brain(const Brain& brain)
{
	operator=(brain);
	std::cout << "Brain is copied." << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	_idea = brain._idea;
	return *this;
}
