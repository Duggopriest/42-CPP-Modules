#include "Intern.h"

Intern::Intern()
{
	std::cout << "Default constructor for Intern called\n";
	return;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Copy constructor for Intern called\n";
	*this = src;
	return;
}

Intern::~Intern()
{
	std::cout << "Destructor for Intern called\n";
	return;
}

Intern &	Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	std::cout << "Assignement operator for Intern called" << std::endl;
	return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	t_formlist forms[] = 
	{
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "", NULL }
	};

	Form *resultForm;
	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == formName)
			resultForm = forms[i].formType;
		else
			delete forms[i].formType;
	}

	if (resultForm == NULL)
		std::cout << "					Intern did not find the form " << formName << std::endl;
	else
		std::cout << "					Intern creates " << formName << std::endl;
	return resultForm;
}

std::ostream &	operator<<( std::ostream & ostr, Intern const & instance)
{
	(void)instance;
	ostr << "Intern" << std::endl;
	return ostr;
}