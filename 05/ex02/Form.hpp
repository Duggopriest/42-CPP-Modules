#ifndef Form_HPP
# define Form_HPP

#include <string.h>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
public:
	Form( const std::string &name, int gradeToSign, int gradeToExecute );
	Form( const Form &src );
	virtual ~Form( void );

	Form				&operator=( const Form &rhs );
	
	const std::string	&getName( void ) const;
	int					getSignGrade( void ) const;
	int					getExecuteGrade( void ) const;
	bool				isSigned( void ) const;
	void				checkGrades( void ) const;
	bool				beSigned( const Bureaucrat &bureaucrat );
	virtual void		execute( const Bureaucrat &executor ) const = 0;
	void				checkExecutability( const Bureaucrat &executor ) const;

private:
	Form( void );
	const std::string	name;
	bool				is_Signed;
	const int			gradeToSign;
	const int			gradeToExecute;
	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade you set is too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade you set is too low");
		}
	};
	class CantExecuteForm : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The form cannot be executed, either because it wasn't sign"
					"ed, or because the executor has a rank too low");
		}
	};
};

std::ostream	&operator<<( std::ostream &ostr, const Form &instance );

#endif