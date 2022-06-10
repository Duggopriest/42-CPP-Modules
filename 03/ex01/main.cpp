#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap ct("ClapTrap");
	ScavTrap st("ScavTrap");

	st.guardGate();
	ct.attack("ScavTrap");
	st.takeDamage(0);
	st.beRepaired(0);
}