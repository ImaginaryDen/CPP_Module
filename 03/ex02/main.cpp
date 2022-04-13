#include "FragTrap.hpp"

int		main()
{
	FragTrap	fragtrap("Player");

	fragtrap.attack("test");
	fragtrap.takeDamage(10);
	fragtrap.beRepaired(10);
	FragTrap fragtrap2 = fragtrap;
	fragtrap = fragtrap2;
	fragtrap.attack("test");
	fragtrap2.highFivesGuys();
}