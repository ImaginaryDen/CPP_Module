#pragma once

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	_idea;

public:
	Brain(std::string idea = "Nice day");
	Brain(const Brain& brain);
	~Brain();

	Brain&	operator=(const Brain& brain);
	std::string GetIdea() const;
};
