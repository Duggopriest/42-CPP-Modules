#include "Zombie.hpp"

int	main(void)
{
	std::string	name;
	std::cout << "name of zombie" << std::endl;
	std::cin >> name;

	Zombie *z;

	z = newZombie(name);
	z->announce();
	z->distroyz();
	free(z);
	std::cout << "name of zombie" << std::endl;
	std::cin >> name;

	randomChump(name);
}