#include <iostream>

using namespace std;

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout  << "address str\t\t- " << &str << "\n";
	cout  << "address stringPTR\t- " << stringPTR << "\n";
	cout  << "address stringREF\t- " << &stringREF << "\n";

	cout  << "value str\t\t- " << str << "\n";
	cout  << "value stringPTR\t\t- " << *stringPTR << "\n";
	cout  << "value stringREF\t\t- " << stringREF << "\n";
	
}