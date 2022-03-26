#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const& type)
{this->type = type;}

AMateria::AMateria(const AMateria& copy)
{operator=(copy);}

AMateria::~AMateria()
{}

AMateria& AMateria::operator=(const AMateria& copy)
{
	type = copy.type;
	return *this;
}

std::string const& AMateria::getType() const
{return type;}

void AMateria::use(ICharacter& target)
{
	if (!type.compare("ice"))
		std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *\n";
	else if (!type.compare("cure"))
		std::cout << "* heals "<< target.getName()
		<< "’s wounds *\n";
}