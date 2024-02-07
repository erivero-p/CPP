/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:41:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/07 15:01:08 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() 
{
	std::cout << "\033[1;0m" << "DiamondTrap Default Constructor Called"<< "\033[0m" <<std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(std::string nm) : ScavTrap(nm), FragTrap(nm)
{
	std::cout << "\033[1;0m" << "DiamondTrap Constructor Called"<< "\033[0m" <<std::endl;
	this->name = nm;
	ClapTrap::name = nm + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy) : ScavTrap(cpy), FragTrap(cpy)
{
	std::cout << "\033[1;0m" << "DiamondTrap Copy Constructor Called"<< "\033[0m" <<std::endl;
	*this = cpy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	std::cout << "\033[1;0m" << "DiamondTrap Copy Assignment Operator Called" << "\033[0m" << std::endl;
		ClapTrap::operator=(src);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;0m" << "DiamondTrap Destructor Called"<< "\033[0m" <<std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "\033[1;33mI'm DiamondTrap " << this->name;
	std::cout << ". Also known as ClapTrap  " << ClapTrap::name << "\033[0m" << std::endl;
}

void	DiamondTrap::displayStatus()
{
	ClapTrap::displayStatus();
}
