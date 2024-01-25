/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:51:38 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/25 11:05:36 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* HumanA::HumanA(std::string nick, Weapon &weap)
{
	name = nick;
	this->wp = weap;
} */
HumanA::HumanA(std::string nick, Weapon &wp) : name(nick), weapon(wp) {}
//resulta que se puede dar valor a las cosas en la declaración del constructor
// en lugar de en el cuerpo del mismo
HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::string	type;
	type = weapon.getType();
	std::cout << name << " attacks with their " << type << std::endl;
}