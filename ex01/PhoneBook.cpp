/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:08:40 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/19 15:23:44 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook(void){}
PhoneBook::PhoneBook(void)
{
	count = 0;
	index = 0;
}

void	PhoneBook::pb_add(void)
{
	int	i = 0;

	if (index > 7)
	{
		std::cout << "count is 8\ncontact to erase:\n";
		cont[0].display_contact(0);
		std::cout << "next one:\n:";
		cont[1].display_contact(1);
		index = 0;
	}
	while (i < 5)
		i += cont[index].add_contact(i);
	std::cout << "\033[1;36mContact has been saved\033[0m\n";
	index++;
	if (count < 8)
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
		std::cout << "\033[0;31m";
		std::cout << "There's no more than " << count << " contacts stored\n";
		std::cout << "\033[0m";
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
			std::cout << "\033[0;31mPlease, input a correct index\033[0m\n";
		}
	}
}
void	PhoneBook::pb_loop()
{
	std::string	input;

	while (1)
	{
		std::cout << "Please, choose an option\n";
		std::cout << "\033[1;36mADD\033[0m - to add a new contact\n";
		std::cout << "\033[1;36mSEARCH\033[0m - to access the existing contacts\n";
		std::cout << "\033[1;36mEXIT\033[0m - to close the PhoneBook\n";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			pb_add();
		else if (input == "SEARCH")
			pb_search();
		else
			std::cout << "\033[1;31mWrong input!\033[0m" << std::endl;
	}
}
