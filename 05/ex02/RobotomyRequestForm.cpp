#include "RobotomyRequestForm.h"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "Standard constructor for RobotomyRequestForm called\n";
	return;
}

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), target("")
{
	std::cout << "Default constructor for RobotomyRequestForm called\n";
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form("RobotomyRequestForm", 72, 45), target(src.getTarget())
{
	std::cout << "Copy constructor for RobotomyRequestForm called\n";
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Distructor for RobotomyRequestForm called\n";
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	std::cout << "Assignment operator for RobotomyRequestForm called\n";
	rhs.getName();
	return *this;
}

const std::string	&RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutability(executor);
	std::cout << "* Unberable drilling noise *\n";
	if (std::rand() % 2)
		std::cout << "the rebotomization on " << this->target << " has been successfull\n";
	else 
		std::cout << "the rebotomization on " << this->target << " has failed\n";
}