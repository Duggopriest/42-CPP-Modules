#include "Form.hpp"

Form::Form(const std::string &name, int required_grade, int required_execute_grade): name(name), required_grade(required_grade), required_execute_grade(required_execute_grade), sign(false)
{
    std::cout<<"Default constructor of Form class is called"<<std::endl;
	checkGrade();
}

Form::~Form()
{
    std::cout<<"Destructor of Form class is called"<<std::endl;
}

const string &Form::getName(void) const
{
	return (this->name);
}

void Form::checkGrade(void)
{
	if (this->required_grade < Form::highestGrade)
		throw Form::GradeTooHighException();
	if (this->required_grade > Form::lowestGrade)
		throw Form::GradeTooLowException();
}

void	Form::checkExecutability(const Bureaucrat &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->required_execute_grade)
		throw CantExecuteForm();
}

bool	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->required_grade)
	{
		cout << bureaucrat.getName() << " couldn't sign " << this->name << "because grade too low\n";
		return (false);
	}
	cout << bureaucrat.getName() << " signed " << this->name << endl;
	this->sign = true;
	return (true);
}