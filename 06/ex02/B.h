#ifndef B_H
# define B_H

# include <iostream>
# include "Base.h"

class B : public Base
{
	public:
		B();
		B(const B &src);
		~B();

		B & operator=(const B &rhs);
};

std::ostream	&operator<<( std::ostream &ostr, const B &instance );

#endif