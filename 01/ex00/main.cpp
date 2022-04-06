#include "Zombie.hpp"

int	main()
{
	Zombie *z_heap = newZombie("boba");
	Zombie z_stack("pupa");
	randomChump("biba");

	z_heap->announce();
	z_stack.announce();
	delete z_heap;
}