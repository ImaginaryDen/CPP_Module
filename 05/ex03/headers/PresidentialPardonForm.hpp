#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	target;


public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name, std::string t);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);

	void execute(Bureaucrat const & executor) const;
};
