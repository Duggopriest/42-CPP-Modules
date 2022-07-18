#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	cout << "Default Constructor for WrongCat called" << endl;
	WrongAnimal::type = "WrongCat";
	return;
}

WrongCat::~WrongCat(void)
{
	cout << "Destructor for WrongCat called" << endl;
	return;
}

void WrongCat::makeSound(void) const
{
	cout << "Wrong cat Wuuf" << endl;
}