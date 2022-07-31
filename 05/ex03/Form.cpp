#include "Form.hpp"

Form::Form( const std::string &name, int gradeToSign, int gradeToExecute ):
	name(name), is_Signed(false), gradeToSign(gradeToSign),
	gradeToExecute(gradeToExecute)
{
	this->checkGrades();
	std::cout << "Standard constructor for Form called" << std::endl;
	return;
}
Form::Form( void ): name(""), is_Signed(false),
	gradeToSign(Form::lowestGrade), gradeToExecute(Form::lowestGrade)
{

	std::cout << "Default constructor for Form called" << std::endl;
	return;
}
Form::Form( Form const & src ): name(src.getName()), is_Signed(src.isSigned()),
	gradeToSign(src.getSignGrade()), gradeToExecute(src.getExecuteGrade())
{

	std::cout << "Copy constructor for Form called" << std::endl;
	*this = src;
	return;
}
Form::~Form( void )
{

	std::cout << "Destructor for Form called" << std::endl;
	return;
}
Form	&Form::operator=( Form const & rhs )
{
	this->is_Signed = rhs.is_Signed;
	std::cout << "Name and grades are const and can't be overwritten, only isSi"
		"gned was copied" << std::endl;

	std::cout << "Assignement operator for Form called" << std::endl;
	return *this;
}
const std::string	&Form::getName( void ) const
{
	return this->name;
}
int	Form::getSignGrade( void ) const
{
	return this->gradeToSign;
}
int	Form::getExecuteGrade( void ) const
{
	return this->gradeToExecute;
}
bool	Form::isSigned( void ) const
{
	return this->is_Signed;
}
void	Form::checkGrades( void ) const
{
	if (this->gradeToExecute < Form::highestGrade
			|| this->gradeToSign < Form::highestGrade)
		throw Form::GradeTooHighException();
	if (this->gradeToExecute > Form::lowestGrade
			|| this->gradeToSign > Form::lowestGrade)
		throw Form::GradeTooLowException();
}
bool	Form::beSigned( const Bureaucrat &bureaucrat )
{
	if (bureaucrat.getGrade() < this->gradeToSign)
	{
		this->is_Signed = true;
		return true;
	}
	else
	{
		this->is_Signed = false;
		return false;
	}
}
void	Form::checkExecutability( const Bureaucrat &executor ) const
{
	if (!this->is_Signed || executor.getGrade() > this->gradeToExecute)
		throw Form::CantExecuteForm();
}
std::ostream &	operator<<( std::ostream & ostr, Form const & instance)
{
	ostr << instance.getName() << " Form has to be signed by a "
		<< instance.getSignGrade() << " grade and executed by a "
		<< instance.getExecuteGrade() << " grade, it is "
		<< (( instance.isSigned() ) ? "" : "not ") << "signed";
	return ostr;
}