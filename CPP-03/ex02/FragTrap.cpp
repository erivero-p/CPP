/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:18:12 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(void) {

	std::cout << "\033[1;34m" << "FragTrap Default Constructor Called"<< "\033[0m" <<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string nm) : ClapTrap(nm) {

	std::cout << "\033[1;34m" << "FragTrap Constructor Called"<< "\033[0m" <<std::endl;
	this->name = nm;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}
 
FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy) {

	std::cout << "\033[1;34m" << "FragTrap Copy Constructor Called"<< "\033[0m" <<std::endl;
	*this = cpy;
}

FragTrap&	FragTrap::operator=(const FragTrap &src) {

	std::cout << "\033[1;34m" << "FragTrap Copy Asignement Operator Called"<< "\033[0m" <<std::endl;
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}

FragTrap::~FragTrap(void) {

	std::cout << "\033[1;34m" << "FragTrap Destructor Called"<< "\033[0m" <<std::endl;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "\033[1;33mHey guys! lets high five!\033[0m" << std::endl;
}
