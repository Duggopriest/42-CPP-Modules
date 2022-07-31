#include "A.h"

A::A()
{
	std::cout << "Default constructor for A called" << std::endl;
	return;
}

A::A( A const & src )
{
	std::cout << "Aopy constructor for A called" << std::endl;
	*this = src;
	return;
}

A::~A( void )
{
	return;
}

A &	A::operator=( A const & rhs )
{
	(void)rhs;
	std::cout << "Assignement operator for A called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, A const & instance)
{
	(void)instance;
	ostr << "No value for A" << std::endl;
	return ostr;
}