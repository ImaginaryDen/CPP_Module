#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("", 145, 137), target("")
{
	// std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string t)
	: Form(name, 145, 137), target(t)
{
	// std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
	: Form(copy), target(copy.target)
{
	// std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{

	this->target = copy.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();

	std::ofstream file;
	file.open((this->target + "_srubber").c_str());
	file << 	"           * 				\n"
			<< 	"          /|\\      	    \n"       
			<< 	"         /*|O\\			\n"
			<< 	"        /*/|\\*\\			\n"
			<< 	"       /X/O|*\\X\\			\n"
			<< 	"      /*/X/|\\X\\*\\		\n"
			<< 	"     /O/*/X|*\\O\\X\\		\n"
			<< 	"    /*/O/X/|\\X\\O\\*\\	\n"
			<< 	"   /X/O/*/X|O\\X\\*\\O\\	\n"
			<< 	"  /O/X/*/O/|\\X\\*\\O\\X\\	\n"
			<< 	"          |X|				\n"
			<< 	"          |X|				\n"    
			<< std::endl;
	file.close();
}
