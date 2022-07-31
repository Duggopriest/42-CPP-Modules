#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

int	main(void)
{
	std::cout << "========================================== Constructors ===============================================\n";
	Intern		usefulIdiot;
	Bureaucrat	paul("Paul", 3);
	Form		*form;

	std::cout << "========================================== NULL ===============================================\n";

	form = usefulIdiot.makeForm("this one doesn't exist", "Justin");

	std::cout << "========================================== presidential pardon ===============================================\n";

	form = usefulIdiot.makeForm("presidential pardon", "Maynard");
	if (form)
		delete form;
	
	std::cout << "========================================== shrubbery creation ===============================================\n";

	form = usefulIdiot.makeForm("shrubbery creation", "Danny");
	if (form)
		delete form;

	std::cout << "========================================== robotomy request ===============================================\n";

	form = usefulIdiot.makeForm("robotomy request", "Adam");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;

	std::cout << "============================================ Destructors =============================================\n";
	return 0;
}