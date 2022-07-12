#include "Cat.hpp"

Cat::Cat(void)
{
	cout << "Default Constructor for Cat called" << endl;
	this->type = "Cat";
	return;
}

Cat::~Cat(void)
{
	cout << "Destructor for Cat called" << endl;
	return;
}

void Cat::makeSound(void) const
{
	cout << "Meow" << endl;
}