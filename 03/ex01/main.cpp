#include "ScavTrap.hpp"

int		main()
{
	ClapTrap	claptrap("Pupa");

	for (size_t i = 0; i < 11; i++)
		claptrap.attack("void");

	ScavTrap	scavtrap("Biba");

	scavtrap.attack("Boba");
	scavtrap.beRepaired(10);
	scavtrap.guardGate();
}