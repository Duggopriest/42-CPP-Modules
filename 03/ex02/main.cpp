#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap ct("ClapTrap");
	FragTrap ft("FragTrap");

	ft.highFivesGuys();
	ct.attack("FragTrap");
	ft.takeDamage(0);
	ft.beRepaired(0);
	ft.~FragTrap();
	ct.~ClapTrap();
}