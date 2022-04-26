#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

int main()
{
	Intern man;
	Bureaucrat				super_man("John", 100);
	try
	{
		Form *form1 = man.makeForm("RobotomyRequestForm", "mouse");
		super_man.signForm(*form1);
		form1->execute(super_man);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}