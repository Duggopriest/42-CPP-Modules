#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string call)
{
	Name = call;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << Name << " has been constructed" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << Name << " is deconstructing" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " attacks " << target << ", causing 0 points of damage!" << std::endl;
	EnergyPoints--;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " took " << amount << " damage" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " is repairing them self for " << amount << std::endl;
	HitPoints += amount;
	EnergyPoints--;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "who am I? " << " I am " << Name << " and " << "ClapTrap" << std::endl;
}