#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name, std::string t);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);

	void execute(Bureaucrat const & executor) const;
};
