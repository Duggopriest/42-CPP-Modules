#include "Fixed.hpp"

Fixed::Fixed ()
{
	this->value = 0;
}

Fixed::Fixed (const int i)
{
	value = (i << Fixed::bits);
}

Fixed::Fixed (const float i)
{
	value = roundf(i * (1 << Fixed::bits));
}

Fixed::~Fixed ()
{
}

Fixed::Fixed (Fixed const &copy)
{
	value = copy.value;
}

Fixed	&Fixed::operator= (Fixed const &f)
{
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
	return (value);
}

void Fixed::setRawBits ( int const raw )
{
	value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

// operators -------------------------------------------------

static bool isEqual(Fixed const & op1, Fixed const & op2)
{ return (op1.getRawBits() == op2.getRawBits()); }

bool Fixed::operator> (Fixed const & op) const
{
	return (this->value > op.getRawBits());
}

bool Fixed::operator< (Fixed const & op) const
{
	return (this->value < op.getRawBits());
}

bool Fixed::operator>=( Fixed const & op) const
{ 
	return (this->value >= op.getRawBits());
}

bool Fixed::operator<= (Fixed const & op) const
{ 
	return (this->value <= op.getRawBits());
}   

bool Fixed::operator== (Fixed const & op) const
{ 
	return (isEqual(*this, op)); 
}   
bool Fixed::operator!= (Fixed const & op) const
{
	return !(isEqual(*this, op));
}

// other operators ---------------------------------------

Fixed Fixed::operator+(const Fixed & f) const
{
	Fixed rtn;
	rtn.setRawBits(this->value + f.getRawBits());
	return (rtn);
}
Fixed Fixed::operator-(const Fixed & f) const
{
		Fixed rtn;
	rtn.setRawBits(this->value - f.getRawBits());
	return (rtn);
}
Fixed Fixed::operator*(const Fixed & op) const
{
    Fixed rtn;
    rtn.setRawBits((this->value * op.getRawBits()) >> this->bits);
    return (rtn);
}

Fixed Fixed::operator/(const Fixed & f) const
{
	Fixed rtn;
	rtn.setRawBits((this->value << this->bits) / f.getRawBits());
	return (rtn);
}

// other operators ---------------------------------------

Fixed &Fixed::operator++ (void)
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed rtn (*this);
	operator++();
	return (rtn);
}

Fixed &Fixed::operator-- (void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed rtn (*this);
	operator--();
	return (rtn);
}

// other min max ---------------------------------------


Fixed &Fixed::min(Fixed &u, Fixed &v)
{
	return (u < v ? u : v); 
}

const Fixed &Fixed::min(const Fixed &u, const Fixed &v) 
{ 
	return (u < v ? u : v); 
}

Fixed &Fixed::max(Fixed &u, Fixed &v) 
{ 
	return (u > v ? u : v); 
}

const Fixed &Fixed::max(const Fixed &u, const Fixed &v) 
{ 
	return (u > v ? u : v); 
}

Fixed &min(Fixed &u, Fixed &v)
{
    return (u < v ? u : v);
}

Fixed &max(Fixed &u, Fixed &v)
{
    return (u > v ? u : v);
}