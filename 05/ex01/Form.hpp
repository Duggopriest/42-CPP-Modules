#ifndef Form_HPP
# define Form_HPP

#include <string.h>
#include <iostream>
#include "Bureaucrat.hpp"
using std::string;
using std::cout;
using std::endl;

class Form
{
	public:
	    Form(const std::string &name, int required_grade, int required_execute_grade);
        ~Form();

		void	checkExecutability(const Bureaucrat &bureaucrat) const;
		bool	beSigned(const Bureaucrat &bureaucrat);

		const string &getName(void) const;
	
	private:
		const string	name;
		bool			sign;
		const int		required_grade = 100;
		const int		required_execute_grade = 100;

		static const int	lowestGrade = 150;
		static const int	highestGrade = 1;


		void	checkGrade(void);

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
			return ("The form can't be executed");
		}
	};
};

std::ostream	&operator<<( std::ostream &ostr, const Form &instance );

#endif