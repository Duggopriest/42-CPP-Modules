#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
# include <cmath>

class FragTrap
{
	private:
	std::string Name;
	int 		HitPoints;
	int			EnergyPoints;
	int			AttackDamage;

	public:
	FragTrap(const std::string Name);
	~FragTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	highFivesGuys(void);
};

#endif