/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:52:20 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	nick) : name(nick) {

}
HumanB::~HumanB(void) {

}

void	HumanB::setWeapon(Weapon *wp) {

	this->weapon = wp;
}

void	HumanB::attack(void) {

	if (!this->weapon)
		std::cout << name << " has no weapon :c" << std::endl;
	else
	{
		std::string type = weapon->getType();
		if (type.empty())
			std::cout << name << " has an imaginary weapon :c" << std::endl;
		else
			std::cout << name << " attacks with their " << type << std::endl;	
	}
}
