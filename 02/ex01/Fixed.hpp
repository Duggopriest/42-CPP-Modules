#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
# include <cmath>

class Fixed
{
	private:
	int value; // fixed-point number value
	static const int bits = 8; // store the number of fractional bits. Its value will always be the integer literal 8.

	public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	virtual ~Fixed();

	Fixed				(Fixed const &copy);
	Fixed	&operator=	(Fixed const &f);

	Fixed	&operator==	(Fixed const &f);
	Fixed	&operator>	(Fixed const &f);
	Fixed	&operator>=	(Fixed const &f);
	Fixed	&operator<	(Fixed const &f);
	Fixed	&operator<=	(Fixed const &f);
	Fixed	&operator!=	(Fixed const &f);

	Fixed	&operator+	(Fixed const &f);
	Fixed	&operator-	(Fixed const &f);
	Fixed	&operator*	(Fixed const &f);
	Fixed	&operator/	(Fixed const &f);

	int		toInt		(void) const;
	float	toFloat		(void) const;

	int		getRawBits	(void) const;
	void	setRawBits	(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif