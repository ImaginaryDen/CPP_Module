#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;


public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name, std::string t);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);

	void execute(Bureaucrat const & executor) const;
};
