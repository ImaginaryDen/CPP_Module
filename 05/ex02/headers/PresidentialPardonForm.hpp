#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	target;

	PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);

public:
	PresidentialPardonForm(std::string name, std::string t);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};