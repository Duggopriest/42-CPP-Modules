#include "Cat.hpp"

Cat::Cat(void)
{
	cout << "Default Constructor for Cat called" << endl;
	Animal::type = "Cat";
	this->Brains = new Brain();
	return;
}

Cat::~Cat(void)
{
	cout << "Destructor for Cat called" << endl;
	delete this->Brains;
	return;
}

void Cat::makeSound(void) const
{
	cout << "Meow" << endl;
}