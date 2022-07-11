#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::ClapTrap(const std::string call): Name(call), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	this->InitalEnergyPoints = this->EnergyPoints;
	std::cout << Name << " has been constructed" << std::endl;
}

std::ostream &	operator<<( std::ostream & ostr, ClapTrap const & instance)
{
	ostr << "ClapTrap " << instance.getName();
	return ostr;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement operator called" << std::endl;
	return *this;
}



ClapTrap::~ClapTrap()
{
	std::cout << Name << " is deconstructing" << std::endl;
}

void		ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->Name << " attack " << target
		<< " causing " << this->AttackDamage << " points of damage!"
		<< std::endl;
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





const std::string	&ClapTrap::getName( void ) const
{
	return this->Name;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	this->EnergyPoints -= amount;
	if (this->EnergyPoints < 0)
		std::cout << "ClapTrap " << this->Name << " took " << amount
			<< " damage and is quite unwell by now..." << std::endl;
	else
		std::cout << "ClapTrap " << this->Name << " took " << amount
			<< " hit points, OUCH! Only got " << this->EnergyPoints
			<< " energy points left." << std::endl;
}