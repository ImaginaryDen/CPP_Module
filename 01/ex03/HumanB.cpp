#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void    HumanB::attack(void)
{
	if (weapon)
    	std::cout << name << "  attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << "weapon is NULL" << std::endl;
}


