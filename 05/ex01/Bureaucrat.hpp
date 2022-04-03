#pragma once

#include <string>
#include <iostream>

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int		grade;

	Bureaucrat& operator=(const Bureaucrat& copy);

public:
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	Bureaucrat(std::string name = "None", int grade = MIN_GRADE);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form& form) const;
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat);
