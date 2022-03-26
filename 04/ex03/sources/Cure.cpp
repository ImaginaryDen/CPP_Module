#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure& copy) : AMateria(copy)
{}

Cure::~Cure()
{}

Cure& Cure::operator=(const Cure& rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria *Cure::clone() const
{return new Cure;}