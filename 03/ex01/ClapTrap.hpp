#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
# include <cmath>

class ClapTrap
{
	private:
	std::string Name;
	int 		HitPoints;
	int			EnergyPoints;
	int			AttackDamage;

	public:
	ClapTrap(const std::string Name);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
#endif