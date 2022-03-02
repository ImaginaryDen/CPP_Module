#include <iostream>

using namespace std;

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout  << "address str - " << &str << "\n";
	cout  << "address stringPTR - " << stringPTR << "\n";
	cout  << "address stringREF - " << &stringREF << "\n";

	cout  << "value str - " << str << "\n";
	cout  << "value stringPTR - " << stringPTR << "\n";
	cout  << "value stringREF - " << stringREF << "\n";
	
}