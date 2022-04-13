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

void FragTrap::attack(const std::string& target)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		std::cout << "FragTrap " << _name
				<< " attacks " << target 
				<< ", causing "<< _attack_damage
				<< " points of damage! " << _energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	std::cout << "FragTrap " << _name 
			<< " recieved " << amount
			<< " points of damage!" << std::endl
			<< "hit " << _hit_points << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "FragTrap " << _name
				<< " has repaired himself! " << _energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}
