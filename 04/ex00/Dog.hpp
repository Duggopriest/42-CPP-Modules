#ifndef DOG_HPP
# define DOG_HPP

#include <string.h>
#include <iostream>
#include "Animal.hpp"
using std::string;
using std::cout;
using std::endl;

class Dog : public Animal
{
	public:
	Dog(void);
	Dog( const Dog &src );
	~Dog( void );

	//Dog &operator=(Dog const &value);
	virtual void makeSound(void) const;

	protected:
	string type;
};


#endif