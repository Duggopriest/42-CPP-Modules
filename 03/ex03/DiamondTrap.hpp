#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include <iostream>
# include <cmath>

class DiamondTrap
{
	private:
	std::string Name;
	int 		HitPoints;
	int			EnergyPoints;
	int			AttackDamage;

	public:
	DiamondTrap(const std::string Name);
	~DiamondTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	whoAmI();
};

#endif