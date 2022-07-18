#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Default constructor of Brain class is called"<<std::endl;
}

Brain::~Brain()
{
    std::cout<<"Destructor of Brain class is called"<<std::endl;
}

Brain &Brain::operator=(Brain const &value)
{
    std::cout<<"Assignment operator of Brain class is called"<<std::endl;
	for (int i = 0; i <= 100; i++)
		this->ideas[i] = value.ideas[i];
    return *this;
}