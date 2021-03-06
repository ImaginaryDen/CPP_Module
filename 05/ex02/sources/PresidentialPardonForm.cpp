#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("", 25, 5), target("")
{
	// std::cout << "PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string t)
	: Form(name, 25, 5), target(t)
{
	// std::cout << "PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: Form(copy), target(copy.target)
{
	// std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this == &copy)
		return *this;
	this->target = copy.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout << this->target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}
