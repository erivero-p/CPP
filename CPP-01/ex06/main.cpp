/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:52:42 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/30 11:37:54 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./harl <FILTER>" << std::endl;
		std::cout << "This program will only handle 1 argument" << std::endl;
		return (1);
	}
	Harl	harl("Harl");

	harl.complain(av[1]);
	return (0);
}