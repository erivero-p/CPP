/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:41:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/06 16:27:21 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "\033[1;0m" << "DiamondTrap Default Constructor Called"<< "\033[0m" <<std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(std::string nm)
{
	std::cout << "\033[1;0m" << "DiamondTrap Constructor Called"<< "\033[0m" <<std::endl;
	this->name = nm;
	this->hitPoints = 100;
	this->energyPoints = 50; 
	this->attackDamage = 20;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy)
{
	std::cout << "\033[1;0m" << "DiamondTrap Copy Constructor Called"<< "\033[0m" <<std::endl;
	*this = cpy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	std::cout << "\033[1;0m" << "DiamondTrap Copy Assignment Operator Called" << "\033[0m" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->attackDamage = src.attackDamage;
		this->energyPoints = src.energyPoints;
		this->hitPoints = src.hitPoints;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;0m" << "DiamondTrap Destructor Called"<< "\033[0m" <<std::endl;
}

void	DiamondTrap::guardGate(void)
{
	std::cout << "\033[1;0m" << "DiamondTrap " << this->name << " has entered in gate-keeper mode" << "\033[0m" << std::endl;
}
