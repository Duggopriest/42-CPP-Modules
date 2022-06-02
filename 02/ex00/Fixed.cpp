#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fpnv = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (Fixed &copy)
{
	std::cout << "Copy assignment called"  << std::endl;
	fpnv = copy.fpnv;
}

Fixed &Fixed::operator=(Fixed &f) // this runs when the operator '=' is used like a = b
{
	std::cout << "Copy assignment operator called // <-- This line may be missing depending on your implementation"  << std::endl;
	fpnv = f.fpnv;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fpnv);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fpnv = raw;
}