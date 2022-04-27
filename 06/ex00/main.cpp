#include <iostream>
#include <stdlib.h>
#include <climits>
#include <cerrno>
#include <iomanip>

void nan_print()
{
	std::cout << "char: impossible"<< std::endl;
	std::cout << "int: impossible"<< std::endl;
	std::cout << "double: nan"<< std::endl;
	std::cout << "float: nanf"<< std::endl;
}

void inf_print(int i)
{
	std::cout << "char: impossible"<< std::endl;
	std::cout << "int: impossible"<< std::endl;
	if (i == 0)
	{
		std::cout << "double: +inf"<< std::endl;
		std::cout << "float: +inff"<< std::endl;
	}
	else
	{
		std::cout << "double: -inf"<< std::endl;
		std::cout << "float: -inff"<< std::endl;
	}
}

double to_double(std::string &s)
{
	char *end;
	errno = 0;
	if (s.size() == 1 && !isdigit(s[0]))
		return static_cast<double>(s[0]);
	if(s[s.size() - 1] == 'f')
		s[s.size() - 1] = 0;
	double result = std::strtod(s.c_str(), &end);
	if (errno == ERANGE)
		throw std::out_of_range("todouble: string is out of range");
	if (s.length() == 0 || *end != '\0')
		throw std::invalid_argument("todouble: invalid string");
	return result;
}

void cast_char(std::string str)
{
	std::cout << "char: ";
	try
	{
		if (isprint(static_cast<int>(to_double(str))))
			std::cout << static_cast<char>(to_double(str)) << std::endl;
		else
			std::cout <<  "Non displayable" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout <<  "impossible" << std::endl;
	}
	
}

void cast_int(std::string str)
{
	try
	{
		std::cout << "int: " << static_cast<int>(to_double(str)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout <<  "impossible" << std::endl;
	}
}

void cast_double(std::string str)
{
	try
	{
		std::cout  << std::fixed << std::setprecision(1) << "double: " << to_double(str) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "nan" << std::endl;
	}
}

void cast_float(std::string str)
{
	try
	{
		std::cout  << std::fixed << std::setprecision(1) << "float: " << to_double(str) << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "nanf" << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string arg = argv[1];
	int i = std::string("+-").find(arg[0]) != std::string::npos;
	std::cout << i;
	if(argc != 2)
		return (1);
	if(!arg.compare(0, 3, "nan"))
	{
		nan_print();
		return 0;
	}
	if(!arg.compare(i, 3, "inf"))
	{
		inf_print(arg[0] == '-');
		return 0;
	}
	cast_char(arg);
	cast_int(arg);
	cast_double(arg);
	cast_float(arg);
	return 0;
}