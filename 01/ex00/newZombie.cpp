#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zom;

	zom = (Zombie *)malloc(sizeof(Zombie));
	zom->setname(name);
	return (zom);
}
