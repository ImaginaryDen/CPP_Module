#include "Zombie.hpp"

int	main()
{
	Zombie *z_heap = newZombie("boba");
	Zombie z_stack("pupa");
	randomChump("biba");

	z_heap->announcement();
	z_stack.announcement();
	delete z_heap;
}