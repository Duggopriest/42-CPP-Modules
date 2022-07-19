#include <string.h>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <cmath>
using std::string;
using std::cout;
using std::endl;

int main(int ac, char **av)
{
	if (ac < 2)
		return 0;
	char	c;
	int		i;
	float	f;
	double	d;

	i = atoi(av[1]);
	c = i;
	f = atof(av[1]);
	d = atof(av[1]);

	if (isnan(d))
	{
		cout << "char: " << "impossible" << endl;
		cout << "int: " << "impossible" << endl;
		cout << "float: " << "impossible" << "f" << endl;
		cout << "double: " << "impossible" << endl;
		return (0);
	}

	if (isprint(c))
		cout << "char: " << "'" << c << "'" << endl;
	else
		cout << "char: " << "Non displayable" << endl;
	cout << "int: " << i << endl;
	cout << "float: " << f << "f" << endl;
	cout << "double: " << d << endl;
}