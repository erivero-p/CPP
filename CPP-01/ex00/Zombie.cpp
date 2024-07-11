/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:28:05 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 16:58:34 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	
}

Zombie::Zombie(std::string nick) {

	this->name = nick;
}

Zombie::~Zombie(void) {

	std::cout << "Zombie called " << name << " has been destroyed :c\n";
}

void	Zombie::announce(void) {

	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

