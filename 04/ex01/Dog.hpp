#ifndef DOG_HPP
# define DOG_HPP

#include <string.h>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
using std::string;
using std::cout;
using std::endl;

class Dog : public Animal
{
	public:
	Dog(void);
	~Dog(void);

	virtual void makeSound(void) const;

	protected:
	string type;
	private:
	Brain *Brains;
};


#endif