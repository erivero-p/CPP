/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:51:03 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/02 15:22:09 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
  	ClapTrap John("John Cena");
	ClapTrap Kanye("Kanye");
/* 	std::cout << "\033[0;31m";
	for (int i = 0; i < 11; i++)
		John.attack("Paco");
 	std::cout << "\033[0m"; */
	John.attack("Milo");
	John.attack("Juanes");
	John.takeDamage(5);
	John.displayStatus();
	ClapTrap Copycat = John;
	Copycat.displayStatus();
	Kanye.takeDamage(10);
	Kanye.takeDamage(1);
	Kanye.displayStatus();
}
