/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:51:38 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 16:59:38 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nick, Weapon &wp) : name(nick), weapon(wp) {

}

HumanA::~HumanA() {
	
}

void	HumanA::attack() {

	std::string	type;
	type = weapon.getType();
	std::cout << name << " attacks with their " << type << std::endl;
}