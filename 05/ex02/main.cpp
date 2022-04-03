#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm	form1("Drow tree", "Tree");
		RobotomyRequestForm		form2("Mr. Robot", "Robot");
		PresidentialPardonForm	form3("Presidential pardon","President");

		Bureaucrat				man1("John", 1);
		
		form1.beSigned(man1);
		form1.execute(man1);

		form2.beSigned(man1);
		form2.execute(man1);

		form3.beSigned(man1);
		form3.execute(man1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}