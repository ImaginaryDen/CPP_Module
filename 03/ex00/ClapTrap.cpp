#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "dude";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap " << _name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	this->operator=(claptrap);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	_name = claptrap._name;
	_hit_points = claptrap._hit_points;
	_energy_points = claptrap._energy_points;
	_attack_damage = claptrap._attack_damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name
				<< " attacks " << target 
				<< ", causing "<< _attack_damage  
				<< " points of damage! " << _energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	std::cout << "ClapTrap " << _name 
			<< " recieved " << amount
			<< " points of damage!" << std::endl
			<< "hit " << _hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name
				<< " has repaired himself! " << _energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}
