/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:26:52 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/19 12:51:24 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void){
	title[0] = "First Name: ";
	title[1] = "Last Name: ";
	title[2] = "Nickname: ";
	title[3] = "Phone number: ";
	title[4] = "Darkest secret: ";
}
Contact::~Contact(void){}

int	Contact::add_contact(int field)
{
	std::cout << title[field];
	std::getline(std::cin, data[field]);
	if (data[field].empty())
	{
		std::cout << "No field can be empty\n";
		return (0);
	}
	if (field == 3)
	{
		for (int i = 0; data[field][i]; i++)
		{
			if (!std::isdigit(data[field][i]) && data[field][i] != ' ')
			{
				std::cout << "Phone number must be a number\n";
				return (0);
			}
		}
	}
	return (1);
}

void	ft_print_titles()
{
	std::cout << "Index     |";
	std::cout << "First name|";
	std::cout << "Last name |";
	std::cout << "Nickname  |";
	std::cout << "\n";
}

void Contact::display_contact(int i)
{
	std::string	tmp = "          ";
	int			resize;

	if (i == 0)
		ft_print_titles();
	i++; //para que empiece en 1
	std::cout << i << "         |";
	for (int j = 0; j < 3; j++)
	{
		if (data[j].length() >= 10)
			std::cout << data[j].substr(0, 9) << ".|";
		else
		{
			resize = 10 - data[j].length();
			std::cout << data[j];
			std::cout << tmp.substr(0, resize) << "|";
		}
	}
		std::cout << std::endl;
	}

void Contact::display_full_contact(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << title[i];
		std::cout << data[i] << std::endl;
	}
}