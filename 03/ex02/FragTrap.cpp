#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string call)
{
	Name = call;
	std::cout << Name << " is constructing" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 0;
}

FragTrap::~FragTrap()
{
	std::cout << Name << " has been distroyed" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " attacks " << target << ", causing 0 points of damage!" << std::endl;
	EnergyPoints--;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (EnergyPoints <= 0)
	{
		std::cout << Name << " is out of Energy" << std::endl;
		return ;
	}
	std::cout << Name << " took " << amount << " damage" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << Name << " says High Five!" << std::endl;
}