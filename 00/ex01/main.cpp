/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgobbett <jgobbett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:02:40 by jgobbett          #+#    #+#             */
/*   Updated: 2022/05/26 15:18:23 by jgobbett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "iostream"
#include <string>

class Contact
{
	public:
	std::string		name;
	std::string		phone;

	void	display(void)
	{
		std::cout << name;
		std::cout << " : ";
		std::cout << phone << std::endl;
	}
};

class PhoneBook
{
	public:
	Contact Cons[8];
};

void	shift(Contact *con)
{
	for (int i = 8; i > 1; i--)
	{
		con[i] = con[i - 1];
	}
}

int	main(void)
{
	PhoneBook PB;
	std::string	command;
	while (1)
	{

		for (int i = 0; i < 3 ; i++)
		{
			std::cout << "name of contact"<< std::endl;
			std::cin >> PB.Cons[i].name;
			std::cout << "phone number of ";
			std::cout << PB.Cons[i].name << std::endl;
			std::cin >> PB.Cons[i].phone;
		}
		for (int i = 0; i < 3 ; i++)
			PB.Cons[i].display();
		shift(PB.Cons);
		for (int i = 0; i < 3 ; i++)
			PB.Cons[i].display();
	}
}