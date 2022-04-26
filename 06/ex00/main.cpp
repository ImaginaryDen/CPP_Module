#include <iostream>
#include <stdlib.h>
#include <climits>
#include <cerrno>
#include <iomanip>

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
		std::cout << "nan" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
		return (1);
	cast_char(argv[1]);
	cast_int(argv[1]);
	cast_double(argv[1]);
	cast_float(argv[1]);
	return 0;
}