#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Animal 
{
	public:
	Animal(void);
	Animal(const Animal &src);
	virtual ~Animal(void);

	Animal	&operator=(const Animal &other);

	virtual void makeSound(void) const;
	virtual const string	&getType(void) const;


	protected:
	string type;
};


#endif