#include "Dog.hpp"

Dog::Dog(void)
{
	cout << "Default Constructor for Dog called" << endl;
	Animal::type = "Dog";
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

// Dog &	Dog::operator=(Dog const & rhs)
// {
// 	cout << "Assignement operator for Animal called" << endl;
// 	this->type = rhs.getType();
// 	return *this;
// }