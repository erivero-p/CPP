/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:08:40 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/17 15:39:37 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//PhoneBook::PhoneBook(void){}
PhoneBook::~PhoneBook(void){}
/* Contact::Contact(void)
{
	title[0] = "First Name:" ;
	title[1] = "Last Name:" ;
	title[2] = "Nickname:" ;
	title[3] = "Phone number: ";
	title[4] = "Darkest secret: ";
} */
PhoneBook::Phonebook(void)
{
	title[0] = "First Name:" ;
	title[1] = "Last Name:" ;
	title[2] = "Nickname:" ;
	title[3] = "Phone number: ";
	title[4] = "Darkest secret: ";
}
Contact::~Contact(void){}

int	Contact::add_contact(Contact cont, int field, std::string data)
{
	if (!data)
	{
		std::cout << "No field can be empty\n";
		return (0);
	}
	cont.data[field] = data;
	return (1);
}

void	PhoneBook::pb_add(PhoneBook	aw)
{
	static int	count = 0;
	//tengo que declarar un contacto aquí creo xd
	int	i = 0;
	std::string	data;

	while (i < 5)
	{
		std::cout << title[i];
		std::cin >> data;
		i += aw.add_contact(cont[count], i, data);
	}
}

void	phone_loop(PhoneBook aw)
{
	std::string	input;

	while (1)
	{
		std::cin >> input; //cin toma el input del stdin
		if (input == "EXIT")
			break ;
		if (input == "ADD")
			aw.pb_add(aw);
	//	if (input == "SEARCH")
	}
}

int	main(void)
{
	PhoneBook awesome;

	std::cout << "WELCOME TO MY AWESOME PHONEBOOK\n";
	std::cout << "Please, choose an option\n";
	std::cout << "ADD - to add a new contact\n";
	std::cout << "SEARCH - to access the existing contacts\n";
	std::cout << "EXIT - to close the PhoneBook\n";
	phone_loop(awesome);
	return (0);
}