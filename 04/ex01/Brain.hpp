#ifndef Brain_HPP
# define Brain_HPP

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Brain
{
	public:
	    Brain();
        ~Brain();
		string ideas[100];
		Brain &operator=(Brain const &value);

};

#endif