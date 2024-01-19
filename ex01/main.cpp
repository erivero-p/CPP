/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:27:57 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/19 14:52:39 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


/* void	phone_loop(PhoneBook aw)
{
	std::string	input;

	while (1)
	{
		std::cout << "Please, choose an option\n";
		std::cout << "ADD - to add a new contact\n";
		std::cout << "SEARCH - to access the existing contacts\n";
		std::cout << "EXIT - to close the PhoneBook\n";
		std::cin >> input; //cin toma el input del stdin
		if (input == "EXIT")
			break ;
		if (input == "ADD")
			aw.pb_add(aw);
		if (input == "SEARCH")
			aw.pb_search(aw);
		else //se imprime el Wrong input después de guardar un contacto, pdte arreglar
			std::cout << "Wrong input:\n";

	}
} */

int	main(void)
{
	PhoneBook awesome;
	
	std::cout << "\033[1;36m";
	std::cout << "***************************************\n";
	std::cout << "*                                     *\n";
	std::cout << "*   WELCOME TO MY AWESOME PHONEBOOK   *\n";
	std::cout << "*                                     *\n";
	std::cout << "***************************************\n";
   	std::cout << "\033[0m";
	awesome.pb_loop();
	return (0);
}