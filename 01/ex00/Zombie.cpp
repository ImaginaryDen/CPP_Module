#include "Zombie.hpp"


Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	cout << name << " die\n";
}
void	Zombie::announcement(void)
{
	cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

