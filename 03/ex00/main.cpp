#include "ClapTrap.hpp"

int main()
{
	ClapTrap	claptrap1;

	claptrap1.takeDamage(5);
	claptrap1.beRepaired(5);
	for (int i = 0; i < 10; i++)
		claptrap1.attack("man");
	claptrap1.takeDamage(7);
	claptrap1.beRepaired(7);
	return 0;
}
