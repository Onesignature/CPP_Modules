#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *z = new Zombie();
	z->setname(name);
	return (z);
}

Zombie* zombieHorde( int N, std::string name )
{
	int	i;
	Zombie *horde;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
		horde[i++].setname(name);
	return (horde);
}
