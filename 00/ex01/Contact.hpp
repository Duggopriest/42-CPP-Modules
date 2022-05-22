#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
	int					index;
	static std::string	fields_name[8];
	std::string			informations[8];

	enum	Field {
		FirstName,
		LastName,
		Nickname,
		Login,
		Address,
		Email,
		Phone,
		Birthday
	};
	public:
	Contact();
	virtual ~Contact();

	bool	set_informations(int index);
	void	display_header(void);
	void	display(void);
};

#endif