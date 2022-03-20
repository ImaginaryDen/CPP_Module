#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << name << "  attacks with their " << weapon->getType() << std::endl;
}


