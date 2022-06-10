#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap ct("ClapTrap");
	FragTrap ft("FragTrap");
	ScavTrap st("ScavTrap");
	DiamondTrap dt("DiamondTrap");

	dt.whoAmI();
}