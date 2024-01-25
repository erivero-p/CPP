/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:18:43 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/25 11:23:08 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string tp) : type(tp) {}
Weapon::~Weapon() {}

std::string &Weapon::getType()
{
	std::string &typ = this->type;
	return (typ);
}
void Weapon::setType(std::string typ)
{
	this->type = typ;
}