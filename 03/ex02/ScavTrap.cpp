#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->InitalEnergyPoints = this->HitPoints;
	std::cout << "Name constructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called for ScavTrap called" << std::endl;
	return;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->Name << " entered Gate Keeper mode!" << std::endl;
}

void		ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->Name << " attack " << target
		<< " causing " << this->AttackDamage << " points of damage!" << std::endl;
}
