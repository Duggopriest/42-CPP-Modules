#ifndef ITER_HPP
# define ITER_HPP

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

template<typename T>
void	iter(T *array, int arraySize, void (*fun_ptr)(const T &))
{
	for (int i = 0; i < arraySize; i++)
		fun_ptr(array[i]);
}

#endif