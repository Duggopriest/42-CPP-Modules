#ifndef INTERN_H
# define INTERN_H
# include <iostream>
# include "PresidentialPardonForm.h"
# include "RobotomyRequestForm.h"
# include "ShrubberyCreationForm.h"

class Intern
{
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();

		Intern &operator=(const Intern &rhs);

		Form *makeForm(const std::string &formName, const std::string &target) const;

	private:
		typedef struct s_fromList
		{
			std::string formName;
			Form		*formType;
		} t_formlist;
};

std::ostream	&operator<<( std::ostream &ostr, const Intern &instance );

#endif