#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	_hit_points		= 100;
	_energy_points	= 50;
	_attack_damage	= 20;
	std::cout << "ScavTrap " << _name << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	_hit_points		= 100;
	_energy_points	= 50;
	_attack_damage	= 20;
	std::cout << "ScavTrap " << _name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
	: ClapTrap(scavtrap)
{
	std::cout << "ScavTrap " << _name << " created (copy operation)!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavtrap)
{
	ClapTrap::operator=(scavtrap);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void	ScavTrap::guardGate()
{	
	std::cout << _name << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		std::cout << "ScavTrap " << _name
				<< " attacks " << target 
				<< ", causing "<< _attack_damage  
				<< " points of damage! " << _energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	std::cout << "ScavTrap " << _name 
			<< " recieved " << amount
			<< " points of damage!" << std::endl
			<< "hit " << _hit_points << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "ScavTrap " << _name
				<< " has repaired himself! " << _energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}