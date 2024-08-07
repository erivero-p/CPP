/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:18:12 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:36:22 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	std::cout << "\033[1;34m" << "FragTrap Default Constructor Called"<< "\033[0m" <<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string nm) {

	std::cout << "\033[1;34m" << "FragTrap Constructor Called"<< "\033[0m" <<std::endl;
	this->name = nm;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy) {

	std::cout << "\033[1;34m" << "FragTrap Copy Constructor Called"<< "\033[0m" <<std::endl;
	*this = cpy;
}

FragTrap&	FragTrap::operator=(const FragTrap &src) {

	std::cout << "\033[1;34m" << "FragTrap Copy Asignement Operator Called"<< "\033[0m" <<std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->attackDamage = src.attackDamage;
		this->energyPoints = src.energyPoints;
		this->hitPoints = src.hitPoints;
	}
	return (*this);
}

FragTrap::~FragTrap(void) {

	std::cout << "\033[1;34m" << "FragTrap Destructor Called"<< "\033[0m" <<std::endl;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "\033[1;33mHey guys! lets high five!\033[0m" << std::endl;
}