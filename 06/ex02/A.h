#ifndef A_H
# define A_H

# include <iostream>
# include "Base.h"

class A : public Base
{
	public:
		A();
		A(const A &src);
		~A();

		A & operator=(const A &rhs);
};

std::ostream	&operator<<( std::ostream &ostr, const A &instance );

#endif