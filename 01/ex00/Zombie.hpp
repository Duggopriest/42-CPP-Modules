# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>
#include <string>

class Zombie {
	private:
	std::string name;

	public:
	void announce( void )
	{
		std::cout << this->name;
		std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
	};
	void setname(std::string name)
	{
		if (!name.empty())
			this->name = name;
	};
	void distroyz(void)
	{
		std::cout << "distroying : ";
		std::cout << this->name << std::endl;
	};
};

void 	randomChump( std::string name );
Zombie* newZombie( std::string name );

# endif