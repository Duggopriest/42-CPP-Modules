#include "Dog.hpp"

Dog::Dog(void)
{
	cout << "Default Constructor for Dog called" << endl;
	this->type = "Dog";
	return;
}

Dog::~Dog(void)
{
	cout << "Destructor for Dog called" << endl;
	return;
}

void Dog::makeSound(void) const
{
	cout << "Bark" << endl;
}