#include <Intern.hpp>

Intern::Intern() {}

Intern::Intern( Intern const & b ) {

	*this = b;
}

Intern	&Intern::operator=( Intern const & b ) {

	*this = b;
	return *this;
}

Form *new_ShrubberyCreationForm(std::string const & name, std::string const & target )
	{return new ShrubberyCreationForm(name, target);}
Form *new_RobotomyRequestForm(std::string const & name, std::string const & target )
	{return new RobotomyRequestForm(name, target);}
Form *new_PresidentialPardonForm(std::string const & name, std::string const & target )
	{return new PresidentialPardonForm(name, target);}

Form	*Intern::makeForm( std::string const & name, std::string const & target ) {

	std::string const	formName[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	Form *(*form[3])(std::string const & name, std::string const & target) = {
		&new_ShrubberyCreationForm,
		&new_RobotomyRequestForm,
		&new_PresidentialPardonForm
		};

	for (int i = 0; i < 3; ++i) {
		if (name == formName[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return form[i](name, target);
		}
	}
	throw Intern::FormNotKnownException();
	return NULL;
}

char const	*Intern::FormNotKnownException::what() const throw() {

	return "form not known";
}