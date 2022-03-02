#ifndef	ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

using namespace std;

class Zombie
{
private:
	string	name;
public:
	void	announcement(void);
	void	set_name(string name);
	Zombie(string name);
	Zombie();
	~Zombie();
};

Zombie*	zombieHorde(int N, string name);

#endif
