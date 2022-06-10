#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap c1("ClapTrap");
	ClapTrap c2("ClapTrap Clone");

	c1.attack("ClapTrap Clone");
	c2.takeDamage(0);
	c2.beRepaired(0);
}