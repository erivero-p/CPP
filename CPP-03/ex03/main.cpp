/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:51:03 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:36:37 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
//#include "FragTrap.hpp"

int main()
{
	ClapTrap john("John");
	ScavTrap claude("Claude");
	FragTrap jane("Jane");
	DiamondTrap holly("Holly");

	john.attack("Peter");
	john.takeDamage(42);
	john.displayStatus();
	claude.beRepaired(10);
	claude.takeDamage(19);
	claude.displayStatus();
	claude.guardGate();
	jane.attack("Claire");
	jane.takeDamage(24);
	jane.beRepaired(24);
	jane.displayStatus();
	jane.highFivesGuys();
	holly.displayStatus();
	holly.whoAmI();
}