/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:08:40 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/19 13:11:29 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook(void){}
PhoneBook::PhoneBook(void)
{
/* 	title[0] = "First Name: ";
	title[1] = "Last Name: ";
	title[2] = "Nickname: ";
	title[3] = "Phone number: ";
	title[4] = "Darkest secret: "; */
	count = 0;
}

void	PhoneBook::pb_add(void)
{
	int	i = 0;
	std::string	data = "patata";

	if (count > 7)
		count = 0;
	while (i < 5)
		i += cont[count].add_contact(i);
	std::cout << "Contact has been saved";
	count++;
}
int	ft_get_index(int count)
{
	std::string input;

	std::getline(std::cin, input);
//	std::cin >> input;
	if (input.length() != 1)
		return (-1);
	if (!std::isdigit(input[0]))
		return (-1);
	int	index = std::stoi(input);
	if (index < 1 || index > 8)
		return (-1);
	if (index > count)
	{
		std::cout << "There's no more than " << count << " contacts stored\n";
		return (-1);
	}
	return (index - 1); //para que el primero sea el 0 en el array
}

void	PhoneBook::pb_search(void)
{
	int index = -1;

	if (count == 0)
		std::cout << "PhoneBook is empty yet" << std::endl;
	else
	{
		for (int i = 0; i < count; i++)
			cont[i].display_contact(i);
		std::cout << "Please, input the index of the contact to consult" << std::endl;
		while (index < 0)
		{
			index = ft_get_index(count);
			if (index >= 0)
			{
				cont[index].display_full_contact();
				break ;
			}
			std::cout << "Please, input a correct index\n";
		}
	}
}
void	PhoneBook::pb_loop()
{
	std::string	input;

	while (1)
	{
		std::cout << "Please, choose an option\n";
		std::cout << "ADD - to add a new contact\n";
		std::cout << "SEARCH - to access the existing contacts\n";
		std::cout << "EXIT - to close the PhoneBook\n";
		std::getline(std::cin, input); //cin toma el input del stdin
	//	std::cin >> input;
		if (input == "EXIT")
			break ;
		if (input == "ADD")
			pb_add();
		if (input == "SEARCH")
			pb_search();
		else //se imprime el Wrong input después de guardar un contacto, pdte arreglar
			std::cout << "Wrong input:\n";
	}
}