#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

template<typename T>
void	swap(T &a, T &b)
{
	T	t;

	t = a;
	a = b;
	b = t;
}

template<typename T>
const T &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template<typename T>
const T &max(const T &a, const T&b)
{
	return (a > b ? a : b);
}

#endif