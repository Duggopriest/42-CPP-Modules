#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): name(name), club(weapon)
{
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->club.getType()
		<< std::endl;
}

Weapon&	HumanA::getWeapon( void ) const
{
	return (this->club);
}
