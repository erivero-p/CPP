/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:07:31 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/15 12:28:09 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {

	std::cout << "ELI POR DIOS, acuérdate de borrar el .csv antes de entregar\n";

	if (ac != 2) {
		std::cout << "Usage: ./btc input_file" << std::endl; 
	}
	else
	{
		try {
			BitcoinExchange cryptoBro(av[1]);
		}
		catch (std::exception &e)
		{
			std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
		}
	}
}