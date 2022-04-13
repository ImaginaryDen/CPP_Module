#include "ClapTrap.hpp"

int main()
{
	ClapTrap	claptrap;

	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	for (int i = 0; i < 10; i++)
		claptrap.attack("man");
	claptrap.takeDamage(7);
	claptrap.beRepaired(7);
	return 0;
}
