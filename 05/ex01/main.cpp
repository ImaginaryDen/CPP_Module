#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("dude");

		Form form1("file1", 150, 110);
		//form1.beSigned(b);
		std::cout << form1 << std::endl;
		b.signForm(form1);
		b.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat b("dude");

		Form form1("file1", -10, 110);
		//form1.beSigned(b);
		std::cout << form1 << std::endl;
		b.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}