/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:27:57 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 16:49:50 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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