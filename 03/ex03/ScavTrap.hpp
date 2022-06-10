#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
# include <cmath>

class ScavTrap
{
	private:
	std::string Name;
	int 		HitPoints;
	int			EnergyPoints;
	int			AttackDamage;

	public:
	ScavTrap(const std::string Name);
	~ScavTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	guardGate();
};

#endif