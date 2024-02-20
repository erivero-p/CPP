/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:50:30 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/20 16:07:45 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {

	std::cout << "hay que hacer las copias bien hechas\n";
}

Character::Character(std::string nm) : name(nm) {

	std::cout << "hay que hacer las copias bien hechas\n";
}

Character::Character(const Character &src) {

	*this = src;
}

Character&	Character::operator=(const Character &src) {

	if (this != &src)
		std::cout << "hay que hacer las copias bien hechas\n";
	return (*this);
}

Character::~Character(void) {

}

std::string const& Character::getName(void) const {

	return (this->name);
}