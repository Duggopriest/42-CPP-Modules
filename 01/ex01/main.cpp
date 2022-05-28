#include "Zombie.hpp"

int	main(void)
{
	int			N;
	std::string	name;
	Zombie 		*z;

	std::cout << "name of zombie" << std::endl;
	std::cin >> name;
	std::cout << "number of zombies" << std::endl;
	std::cin >> N;

	z = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		z[i].announce();
	for (int i = 0; i < N; i++)
		z[i].distroyz();
	free(z);
}