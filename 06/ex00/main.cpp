#include <string.h>
#include <iostream>
#include <sstream>
using std::string;
using std::cout;
using std::endl;

int main(int ac, string av)
{
	char	c;
	int		i;
	float	f;
	double	d;

	i = stoi(av);
	c = i;
	f = stof(av);
	d = stod(av);

	if (isprint(c))
		cout << "char: " << c << endl;
	else
		cout << "char: " << "Non displayable" << endl;
	cout << "int: " << i << endl;
	cout << "float: " << f << endl;
	cout << "double: " << d << endl;
}