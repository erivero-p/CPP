/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:20:04 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 09:55:36 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Interface.hpp"

Cure::Cure(void) {

	std::cout << LGRAY << "Cure Constructor called" << RNL;
	this->type = "cure";
}

Cure::Cure(Cure const & src) {

	std::cout << LGRAY << "Cure Copy Constructor called" << RNL;
	*this = src;
}
Cure &Cure::operator=(Cure const & src) {

	if (this != &src)
		this->type = src.getType();
	return (*this);
}

Cure::~Cure(void) {

	std::cout << RED << "Cure Destructor called" << RNL;
}

void Cure::use(ICharacter& target) {

	std::cout << BOLD;
	std::cout << "* heals " << target.getName() << "'s wounds *";
	std::cout << RNL;
}

Cure*	Cure::clone(void) const {

	return (new Cure(*this));
}