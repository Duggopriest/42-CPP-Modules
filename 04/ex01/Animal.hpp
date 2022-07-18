#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal &oth);
        virtual ~Animal();
        Animal &operator=(Animal const &value);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const;
};


#endif