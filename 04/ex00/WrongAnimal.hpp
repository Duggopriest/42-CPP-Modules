#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal(const WrongAnimal &oth);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &value);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const;
};


#endif