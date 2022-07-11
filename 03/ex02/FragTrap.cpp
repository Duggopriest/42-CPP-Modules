#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->InitalEnergyPoints = this->HitPoints;
	std::cout << "Name constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap( void )
{
	std::cout << "Default constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor called for FragTrap called" << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys! Give me a high five!" << std::endl;
}