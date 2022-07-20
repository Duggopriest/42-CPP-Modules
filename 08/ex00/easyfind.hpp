#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string.h>
#include <iostream>
#include <algorithm>
using std::string;
using std::cout;
using std::endl;

template<typename T>
typename T::iterator easyfind(T &container, int goal)
{
	typename T::iterator result = find(container.begin(), container.end(), goal);

	if (result == container.end())
		return container.end();
	return result;
}

// template<typename T>
// int	easyfind(T &a, int &b)
// {
	
// 	for (int i = 0; a[i]; i++)
// 	{
// 		cout << a[i] << endl;
// 		if (a[i] == b)
// 			return (i);
// 	}
// 	return (-1);
// }

#endif