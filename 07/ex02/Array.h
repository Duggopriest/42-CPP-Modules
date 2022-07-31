#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template<typename T>
class Array
{
	public:
		Array<T>(void): size(0), array(NULL)
		{
			std::cout << "Empty constructor called\n";
		}

		Array<T>(const unsigned int size): size(size)
		{
			std::cout << "Size constructor called\n";
			if (size < 0)
				throw std::overflow_error("Index out of bounds");
			this->array = new T[size];
		}

		Array<T>(const Array<T> &src)
		{
			std::cout << "Copy constructor called\n";
			*this = src;
		}

		~Array<T>()
		{
			std::cout << "Destructor called\n";
			if (this->size > 0)
				delete [] this->array;
		}

		Array<T>	&operator=(const Array<T> &rhs)
		{
			std::cout << "Assignation overload called\n";
			if (this == &rhs)
				return *this;
			if (this->size > 0)
				delete [] this->array;
			this->size = rhs.getSize();
			this->array = new T[this->size];
			for (int i = 0; i < this->size; i++)
				this->array[i] = rhs[i];
			return *this;
		}

		T	&operator[](const int idx) const
		{
			if (idx >= this->size || idx < 0)
				throw std::overflow_error("Index out of bounds");
			return this->array[idx];
		}

		int	getSize() const
		{
			return this->size;
		}


	private:
		int	size;
		T	*array;
};

#endif