/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:51:03 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/05 11:19:30 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{

	ClapTrap john("John");
	ClapTrap claude("Claude");
	ScavTrap jane("Jane");

	john.attack("Peter");
	john.attack("Claire");
	john.attack("Pencil");
	john.takeDamage(42);
	claude.beRepaired(10);
	claude.takeDamage(19);
	jane.attack("Claire");
	jane.takeDamage(24);
	jane.beRepaired(24);
	jane.displayStatus();
	jane.guardGate();
}