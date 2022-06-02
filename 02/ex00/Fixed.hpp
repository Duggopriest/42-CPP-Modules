#pragma once
#include <iostream>

class Fixed
{
	private:
	int fpnv; // fixed-point number value
	static const int fb = 8; // store the number of fractional bits. Its value will always be the integer literal 8.

	public:
	Fixed ();
	~Fixed ();
	Fixed (Fixed &copy);
	Fixed &operator=(Fixed &f);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};