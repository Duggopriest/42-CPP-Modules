#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
{
	ClapTrap::Name = name + "_clap_name";
	this->Name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "Name constructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor for DiamondTrap called" << std::endl;
	return;
}

void		DiamondTrap::attack( const std::string &target ) const
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void) const
{
	std::cout << "I am " << this->Name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}