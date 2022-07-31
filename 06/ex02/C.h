#ifndef C_H
# define C_H

# include <iostream>
# include "Base.h"

class C : public Base
{
	public:
		C();
		C(const C &src);
		~C();

		C & operator=(const C &rhs);
};

std::ostream	&operator<<( std::ostream &ostr, const C &instance );

#endif