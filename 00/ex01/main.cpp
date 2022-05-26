/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgobbett <jgobbett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:02:40 by jgobbett          #+#    #+#             */
/*   Updated: 2022/05/26 16:58:42 by jgobbett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "iostream"
#include <string>

class Contact
{
	public:
	std::string		name;
	std::string		Last_name;
	std::string		Nick_name;
	std::string		secret;
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

int	main(void)
{
	PhoneBook PB;
	std::string	command;
	while (1)
	{
		system("clear");
		std::cout << "command" << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			std::cout << "ADD New Contact"<< std::endl;
			for (int i = 1; i >= 0; i--)
				PB.Cons[i] = PB.Cons[i - 1];
			std::cout << "name of contact"<< std::endl;
			std::cin >> PB.Cons[0].name;
			while (PB.Cons[0].name.size() < 10)
				PB.Cons[0].name.append(" ");
			std::cout << "phone number of ";
			std::cout << PB.Cons[0].name << std::endl;
			std::cin >> PB.Cons[0].phone;
			while (PB.Cons[0].phone.size() < 10)
				PB.Cons[0].phone.append(" ");
		}
		else if (command == "SEARCH")
		{
			for (int i = 0; i < 8 ; i++)
			{
				std::string temp;
				std::cout << i + 1;
				std::cout << " | ";
				if (PB.Cons[i].name.size() > 10)
				{
					temp = PB.Cons[i].name;
					temp.resize(9);
					std::cout << temp;
					std::cout << ".";
				}
				else
					std::cout << PB.Cons[i].name;
				std::cout << " | ";
				if (PB.Cons[i].phone.size() > 10)
				{
					temp = PB.Cons[i].phone;
					temp.resize(9);
					std::cout << temp;
					std::cout << "." << std::endl;
				}
				else
					std::cout << PB.Cons[i].phone << std::endl;
			}
		}
		else if (command == "EXIT")
			break ;
	}
}
