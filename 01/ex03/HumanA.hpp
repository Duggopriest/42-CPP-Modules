# ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
	HumanA( std::string name, Weapon &club );
	~HumanA( void );

	void	attack( void ) const;

	Weapon&	getWeapon( void ) const;

	private:

	std::string name;
	Weapon		&club;
};

#endif