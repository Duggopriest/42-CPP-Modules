#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "Standard constructor for PresidentialPardonForm called\n";
	return;
}

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), target("")
{
	std::cout << "Default constructor for PresidentialPardonForm called\n";
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form("PresidentialPardonForm", 25, 5), target(src.getTarget())
{
	std::cout << "Copy constructor for PresidentialPardonForm called\n";
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor for PresidentialPardonForm called\n";
	return;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "Assignement operator for PresidentialPardonForm called" << std::endl;
	rhs.getName();
	return *this;
}

const std::string	&PresidentialPardonForm::getTarget( void ) const
{
	return this->target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutability(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox.\n";
}