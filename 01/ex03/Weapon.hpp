# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <stdio.h>
#include <string>

#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon {
	public:
	Weapon( std::string type );
	~Weapon( void );

	void	setType( const std::string& newType );

	const std::string&	getType( void ) const;

	private:
	std::string type;
};



# endif