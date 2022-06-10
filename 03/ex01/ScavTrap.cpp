#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string call)
{
	Name = call;
	std::cout << Name << " is now constructing" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << Name << " has now been distroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " attacks " << target << ", causing 0 points of damage!" << std::endl;
	EnergyPoints--;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " took " << amount << " damage" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::guardGate()
{
	std::cout << Name << " is now in Gate keeper mode" << std::endl;
}