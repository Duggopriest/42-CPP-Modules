#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed (const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = i << this->bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(f * (1 << this->bits)));
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (Fixed const &copy)
{
	std::cout << "Copy assignment called"  << std::endl;
	value = copy.value;
}

Fixed	&Fixed::operator= (Fixed const &f)
{
	std::cout << "Copy assignment operator called // <-- This line may be missing depending on your implementation"  << std::endl;
	value = f.value;
	return *this;
}

int		Fixed::toInt (void) const
{
	return (value >> Fixed::bits);
}

float	Fixed::toFloat (void) const
{
	return ((float)value / (float)(1 << Fixed::bits));
}


int Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits ( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

Fixed	&Fixed::operator== (Fixed const &f)
{
	value = f.value;
	return *this;
}

Fixed	&Fixed::operator> (Fixed const &f)
{
	value = f.value;
	return *this;
}

Fixed	&Fixed::operator>= (Fixed const &f)
{
	value = f.value;
	return *this;
}

Fixed	&Fixed::operator< (Fixed const &f)
{
	value = f.value;
	return *this;
}

Fixed	&Fixed::operator<= (Fixed const &f)
{
	value = f.value;
	return *this;
}

Fixed	&Fixed::operator!= (Fixed const &f)
{
	value = f.value;
	return *this;
}

Fixed	&Fixed::operator+ (Fixed const &f)
{
	value += f.value;
	return *this;
}
Fixed	&Fixed::operator- (Fixed const &f)
{
	value -= f.value;
	return *this;
}
Fixed	&Fixed::operator* (Fixed const &f)
{
	value *= f.value;
	return *this;
}
Fixed	&Fixed::operator/ (Fixed const &f)
{
	value /= f.value;
	return *this;
}