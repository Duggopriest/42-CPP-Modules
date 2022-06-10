#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string call)
{
	Name = call;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << Name << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << Name << " is deconstructing" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " attacks " << target << ", causing 0 points of damage!" << std::endl;
	EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " took " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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