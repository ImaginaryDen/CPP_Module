#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap)
	: ClapTrap(fragtrap)
{
	std::cout << "FragTrap " << _name << " created (copy operation)!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap)
{
	ClapTrap::operator=(fragtrap);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "HELOOOO" << std::endl;
}
