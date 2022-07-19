#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade)
{
    std::cout<<"Default constructor of Bureaucrat class is called"<<std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Destructor of Bureaucrat class is called"<<std::endl;
}

const string &Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::checkGrade(void)
{
	if (this->grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade(int quantity)
{
	cout << "incrementGrade from Bureaucrat called with value " << quantity << endl;
	this->grade -= quantity;
	checkGrade();
}

void Bureaucrat::decrementGrade(int quantity)
{
	cout << "decrementGrade from Bureaucrat called with value " << quantity << endl;
	this->grade += quantity;
	checkGrade();
}

std::ostream & operator<<(std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return (ostr);
}