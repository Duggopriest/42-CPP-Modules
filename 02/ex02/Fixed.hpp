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
	Fixed	();
	Fixed	(const int i);
	Fixed	(const float i);
	virtual ~Fixed();

	Fixed				(Fixed const &copy);
	Fixed	&operator=	(Fixed const &f);

	bool operator>(Fixed const & op) const;
	bool operator<(Fixed const & op) const;
	bool operator>=(Fixed const & op) const;
	bool operator<=(Fixed const & op) const;
	bool operator==(Fixed const & op) const;
	bool operator!=(Fixed const & op) const;

	Fixed operator+(const Fixed & f) const;
	Fixed operator-(const Fixed & f) const;
	Fixed operator*(const Fixed & f) const;
	Fixed operator/(const Fixed & f) const;

	Fixed & operator++(void);            //pre increment
	Fixed operator++(int);              //post increment
	Fixed & operator--(void);
	Fixed operator--(int);

	static Fixed &min(Fixed &u, Fixed &v);
	const static Fixed &min(const Fixed &u, const Fixed &v);
	static Fixed &max(Fixed &u, Fixed &v);
	const static Fixed &max(const Fixed &u, const Fixed &v);

	int		toInt		(void) const;
	float	toFloat		(void) const;

	int		getRawBits	(void) const;
	void	setRawBits	(int const raw);
};

Fixed &min(Fixed &u, Fixed &v);
Fixed &max(Fixed &u, Fixed &v);
std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif