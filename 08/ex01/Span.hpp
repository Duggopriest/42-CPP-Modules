#ifndef SPAN_HPP
# define SPAN_HPP

# include <string.h>
# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <iterator>
using std::string;
using std::cout;
using std::endl;

class Span
{
	private:
		unsigned int N;
		std::vector<int>	storage;
	public:
	    Span(unsigned int N);
        ~Span();
		
		void	addNumber(int new_number);

		Span	&operator=( const Span &rhs );

		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;

		unsigned int	size( void ) const;
		unsigned int	maxSize( void ) const;
		unsigned int	spaceLeft( void ) const;

	public:
		class ArrayOverFlow : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Array already full");
				}
		};
};

#endif