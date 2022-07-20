#include "Span.hpp"

Span::Span(unsigned int N): N(N)
{
    std::cout<<"Default constructor of Span class is called"<<std::endl;
}

Span::~Span()
{
    std::cout<<"Destructor of Span class is called"<<std::endl;
}

unsigned int	Span::size(void) const
{
	return (storage.size());
}

unsigned int	Span::maxSize( void ) const
{
	return (N);
}

unsigned int	Span::spaceLeft( void ) const
{
	return (storage.size() - N);
}

void	Span::addNumber(int new_number)
{
	if (storage.size() == N)
		throw std::out_of_range("Cannot add any more numbers");
	std::cout << "addNumber function called with number " << new_number << std::endl;
	storage.push_back(new_number);
}

int		Span::shortestSpan( void ) const
{
	std::vector<int>	tmp = storage;
	int					result = 1;
	std::vector<int>::iterator	it;

	if (storage.size() <= 1)
		throw std::logic_error("Not enough numbers stored");
	sort(tmp.begin(), tmp.end());
	result = *(tmp.begin() + 1) - *tmp.begin();

	if (this->size() == 2)
		return result;
	
	for (it = tmp.begin() + 1; it != tmp.end() - 1 && result != 0; it++)
	{
		if (*(it + 1) - *it < result)
			result = *(it + 1) - *it;
	}
	return (result);
}

// 1 4 10 20 30
// 28

int		Span::longestSpan( void ) const
{
	std::vector<int>	tmp = storage;

	if (storage.size() <= 1)
		throw std::logic_error("Not enough numbers stored");
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}