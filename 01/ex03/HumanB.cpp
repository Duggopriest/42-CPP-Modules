#include "Weapon.hpp"

HumanB::HumanB( std::string name ): name(name), club(nullptr)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void ) const
{
	if (this->club)
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType()
			<< std::endl;
	}
	else
	{
		std::cout << this->name
			<< " can't attack because they don't have a weapon" << std::endl;
	}
}

Weapon&	HumanB::getWeapon( void ) const
{
	return (*(this->club));
}

bool	HumanB::setWeapon( Weapon& newWeapon )
{
	if (newWeapon.getType() == "")
	{
		std::cerr << "New weapon can't be nothing" << std::endl;
		return (false);
	}
	this->club = &newWeapon;
	return (true);
}
