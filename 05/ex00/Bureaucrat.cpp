#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name), grade(grade)
{
	if (grade < Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > Bureaucrat::min_grade)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
	: name(copy.name), grade(copy.grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	grade = copy.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > Bureaucrat::min_grade)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return stream;
}
