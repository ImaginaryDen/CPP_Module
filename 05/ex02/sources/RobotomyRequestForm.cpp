#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("", 72, 45), target("")
{
	// std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string t)
	: Form(name, 72, 45), target(t)
{
	// std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
	: Form(copy), target(copy.target)
{
	// std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this == &copy)
		return *this;
	this->target = copy.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	srand(time(NULL));
	if(rand() % 2)
		std::cout << "DRRR...RRR " + this->target + " has been has been robotomized" << std::endl;
	else
		std::cout << "DRRR...RRR " + this->target + " robotomized is fail" << std::endl;

}
