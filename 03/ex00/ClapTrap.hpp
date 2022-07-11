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
	int			InitalEnergyPoints;

	public:
	ClapTrap(const std::string Name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap();

	ClapTrap	&operator=( const ClapTrap &other );

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	const std::string	&getName( void ) const ;
};
#endif