#include "Form.hpp"

Form::Form()
	: name("None"), is_signed(false), grade_to_sign(1), grade_to_execute(1)
{}

Form::Form(std::string name, unsigned int gts, unsigned int gte)
	: name(name), is_signed(false), grade_to_sign(gts), grade_to_execute(gte)
{
	if (gts > MIN_GRADE || gte > MIN_GRADE)
	{
		throw Form::GradeTooLowException();
	}
	if (gts < MAX_GRADE || gte < MAX_GRADE)
	{
		throw Form::GradeTooHighException();
	}
}

Form::Form(const Form& copy)
	: name(copy.name), is_signed(copy.is_signed),
	grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute)
{}

Form::~Form()
{}

Form& Form::operator=(const Form& copy)
{
	is_signed = copy.is_signed;
	return *this;
}

const std::string& Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return is_signed;
}

int Form::getGradeToSign() const
{
	return grade_to_sign;
}

int Form::getGradeToExecute() const
{
	return grade_to_execute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_sign)
	{
		throw Form::GradeTooLowException();
	}
	else if (is_signed)
		throw Form::SignedException();
	else
		is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

const char* Form::SignedException::what() const throw()
{
	return "Form is already signed.";
}

std::ostream& operator<<(std::ostream& stream, const Form& form)
{
	stream << "{";
	stream << "Name : \"" << form.getName() << "\", ";
	stream << "Is Signed : \"" << (form.getIsSigned() ? "Yes" : "No") << "\", ";
	stream << "Grades to sign : \"" << form.getGradeToSign() << "\", ";
	stream << "Grades to execute : \"" << form.getGradeToExecute() << "\", ";
	stream << "}";
	return stream;
}
