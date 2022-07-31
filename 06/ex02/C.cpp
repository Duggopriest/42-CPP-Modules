#include "C.h"

C::C()
{
	std::cout << "Default constructor for C called" << std::endl;
	return;
}

C::C( C const & src )
{
	std::cout << "Copy constructor for C called" << std::endl;
	*this = src;
	return;
}

C::~C( void )
{
	return;
}

C &	C::operator=( C const & rhs )
{
	(void)rhs;
	std::cout << "Assignement operator for C called" << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, C const & instance)
{
	(void)instance;
	ostr << "No value for C" << std::endl;
	return ostr;
}