/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:14:41 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 16:59:06 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	
}

Zombie::~Zombie(void) {

	std::cout << "Zombie called " << name << " has been destroyed :c\n";
}

void	Zombie::announce(void) {

	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::namer(std::string nick) {

	name = nick;
}