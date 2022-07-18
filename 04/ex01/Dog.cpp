#include "Dog.hpp"

Dog::Dog(void)
{
	cout << "Default Constructor for Dog called" << endl;
	Animal::type = "Dog";
	this->Brains = new Brain();
	return;
}

Dog::~Dog(void)
{
	cout << "Destructor for Dog called" << endl;
	delete this->Brains;
	return;
}

void Dog::makeSound(void) const
{
	cout << "Bark" << endl;
}