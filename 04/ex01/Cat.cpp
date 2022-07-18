#include "Cat.hpp"

Cat::Cat(void)
{
	cout << "Default Constructor for Cat called" << endl;
	Animal::type = "Cat";
	Brain = new Brain();
	return;
}

Cat::~Cat(void)
{
	cout << "Destructor for Cat called" << endl;
	delete this->brain;
	return;
}

void Cat::makeSound(void) const
{
	cout << "Meow" << endl;
}