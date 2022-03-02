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
	Zombie(string name);
	~Zombie();
};

Zombie *newZombie(string name);
void	randomChump(string name);

#endif
