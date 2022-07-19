#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <string.h>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Bureaucrat
{
	public:
	    Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();

		const std::string	&getName( void ) const;

		int		getGrade( void ) const;
		void	incrementGrade(int quantity);
		void	decrementGrade(int quantity);

	private:
		const std::string	name;
		int					grade;
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

};

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &instance );

#endif