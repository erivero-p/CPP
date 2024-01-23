/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:26:52 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/19 15:05:20 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void){
	title[0] = "\033[0;36mFirst Name: \033[0m";
	title[1] = "\033[0;36mLast Name: \033[0m";
	title[2] = "\033[0;36mNickname: \033[0m";
	title[3] = "\033[0;36mPhone number: \033[0m";
	title[4] = "\033[0;36mDarkest secret: \033[0m";
}
Contact::~Contact(void){}

int	Contact::add_contact(int field)
{
	std::cout << title[field];
	std::getline(std::cin, data[field]);
	if (data[field].empty())
	{
		std::cout << "\033[0;31mNo field can be empty\033[0m\n";
		return (0);
	}
	if (field == 3)
	{
		for (int i = 0; data[field][i]; i++)
		{
			if (!std::isdigit(data[field][i]) && data[field][i] != ' ')
			{
				std::cout << "\033[0;31mPhone number must be a number\033[0m\n";
				return (0);
			}
		}
	}
	return (1);
}

void	ft_print_titles()
{
	std::cout << "\033[0;36m";
	std::cout << "Index     |";
	std::cout << "First name|";
	std::cout << "Last name |";
	std::cout << "Nickname  |";
	std::cout << "\033[0m";
	std::cout << std::endl;
}

void Contact::display_contact(int i)
{
	std::string	tmp = "          ";
	int			resize;

	if (i == 0)
		ft_print_titles();
	i++; //para que empiece en 1
	std::cout << "\033[0;36m" << i << "         |\033[0m";
	for (int j = 0; j < 3; j++)
	{
		if (data[j].length() >= 10)
			std::cout << data[j].substr(0, 9) << ".\033[0m|\033[0m";
		else
		{
			resize = 10 - data[j].length();
			std::cout << data[j];
			std::cout << tmp.substr(0, resize) << "\033[0;36m|\033[0m";
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