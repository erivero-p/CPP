/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:32:51 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/02 16:53:52 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "\033[0;36m" << "Default Constructor called" << "\033[0m" << std::endl;
}
ClapTrap::ClapTrap(std::string nm) : name(nm), hitPoints(10), energyPoints(10), attackDamage(0) {
	
	std::cout << "\033[0;36m" << "Name Constructor called" << "\033[0m" << std::endl;
 }
ClapTrap::~ClapTrap() {
	std::cout << "\033[0;36m" << "Destructor called" << "\033[0m" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "\033[0;36m" << "Copy Constructor called" << "\033[0m" << std::endl;
	*this = cpy;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "\033[0;36m" << "Copy Assignment Operator Called" << "\033[0m" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->attackDamage = src.attackDamage;
		this->energyPoints = src.energyPoints;
		this->hitPoints = src.hitPoints;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		this->hitPoints--;
	}
	else if (this->energyPoints == 0)
		std::cout << "ClapTrap " << this->name << " cannot attack! he has not energy left!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot attack! he has not hit points left!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " has been repaired, gaining ";
		std::cout << amount << " hit points." << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot be repaired! he has not energy left!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " has taken a total of ";
		std::cout << amount << " points of damage." << std::endl;
		this->hitPoints -= amount;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot take more damage!" << std::endl;
}

void	ClapTrap::displayStatus(void)
{
	std::cout << this->name << "'s Energy:        " << this->energyPoints << std::endl;
	std::cout << this->name << "'s HP:            " << this->hitPoints << std::endl;
	std::cout << this->name << "'s Attack damage: " << this->attackDamage << std::endl;
}