#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat joe("joe", 5);
	Bureaucrat tim("tim", 145);

	joe.incrementGrade(3);
	cout << joe << endl;
	tim.decrementGrade(3);
	cout << tim << endl;

	cout << "===============================\n";
	try
	{
		joe.incrementGrade(3);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		tim.decrementGrade(3);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << "===============================\n";
	Form Bill("Bill", 100, 100);

	Bill.beSigned(tim);
	Bill.beSigned(joe);

	cout << "===============================\n";
	try
	{
		Form test("test", -5, 1);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << "===============================\n";
	
}