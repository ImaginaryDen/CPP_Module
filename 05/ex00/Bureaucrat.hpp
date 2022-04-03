#pragma once

#include <string>
#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int		grade;

	static const int	max_grade = 1;
	static const int	min_grade = 150;

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

	Bureaucrat(std::string name = "None", int grade = 150);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat);
