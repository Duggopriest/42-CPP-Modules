#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat joe("joe", 5);
	Bureaucrat tim("tim", 145);

	joe.incrementGrade(3);
	cout << joe << endl;
	tim.decrementGrade(3);
	cout << tim << endl;

	cout << "===============================\n";
	joe.incrementGrade(3);
	tim.decrementGrade(3);
	cout << "===============================\n";
}