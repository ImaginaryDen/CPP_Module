#include "Zombie.hpp"

int	main(int argc, char**argv)
{
	Zombie* the_Horde;

	if (argc != 2)
		return (1);
	the_Horde = zombieHorde(10, argv[1]);
	for (int i = 0; i < 10; i++)
		the_Horde[i].announcement();
	std::cout << std::endl;
	delete[] the_Horde;
}