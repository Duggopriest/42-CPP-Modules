#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class WrongCat : public WrongAnimal
{
	public:
	WrongCat(void);
	WrongCat( const WrongCat &src );
	~WrongCat( void );

	virtual void makeSound(void) const;

	protected:
	string type;
};



#endif