/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:38:19 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(void) {

	std::cout << "\033[1;36m" << "ScavTrap Default Constructor Called"<< "\033[0m" <<std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50; 
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm) {

	std::cout << "\033[1;36m" << "ScavTrap Constructor Called"<< "\033[0m" <<std::endl;
	this->name = nm;
	this->hitPoints = 100;
	this->energyPoints = 50; 
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy) {

	std::cout << "\033[1;36m" << "ScavTrap Copy Constructor Called"<< "\033[0m" <<std::endl;
	*this = cpy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {

	std::cout << "\033[1;36m" << "ScavTrap Copy Assignment Operator Called" << "\033[0m" << std::endl;
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}

ScavTrap::~ScavTrap(void) {

	std::cout << "\033[1;36m" << "ScavTrap Destructor Called"<< "\033[0m" <<std::endl;
}

void	ScavTrap::guardGate(void) {

	std::cout << "\033[1;33m" << "ScavTrap " << this->name << " has entered in gate-keeper mode" << "\033[0m" << std::endl;
}
