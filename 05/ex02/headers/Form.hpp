#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int	grade_to_sign;
	const int	grade_to_execute;


public:

	Form();
	Form& operator=(const Form& copy);
	
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class SignedException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class UnsignedException : public std::exception
	{
		virtual const char* what() const throw();
	};

	Form(std::string name, unsigned int gts, unsigned int gte);
	Form(const Form& copy);
	~Form();

	const std::string& getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& stream, const Form& form);
