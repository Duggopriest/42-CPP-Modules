#ifndef CAT_HPP
# define CAT_HPP

#include <string.h>
#include <iostream>
#include "Animal.hpp"
using std::string;
using std::cout;
using std::endl;

class Cat : public Animal
{
	public:
	Cat(void);
	~Cat(void);

	virtual void makeSound(void) const;

	protected:
	string type;
};


#endif