#include "Animal.hpp"

Animal::Animal(void): type("")
{
	cout << "Default Constructor for Animal called" << endl;
}

Animal::Animal(Animal const & src)
{
	cout << "Copy constructor for Animal called" << endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	cout << "Destructor for Animal called" << endl;
	return;
}

void Animal::makeSound(void) const
{
	cout << "All the animals barked" << endl;
}

const string &Animal::getType(void) const
{
	return (this->type);
}

Animal &	Animal::operator=(Animal const & rhs)
{
	cout << "Assignement operator for Animal called" << endl;
	this->type = rhs.getType();
	return *this;
}