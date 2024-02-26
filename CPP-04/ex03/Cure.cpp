/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:14:23 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/20 12:20:42 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {

	this->type = "cure";
}

Cure::Cure(const Cure &cpy) {

	*this = cpy;
}

Cure& Cure::operator=(const Cure &src) {

	if (this != &src)
		this->type = src.getType();
	return (*this);
}

Cure::~Cure(void) {
	
}

Cure* Cure::clone(void) const {

	Cure *cln = new Cure();
	return (cln);
}

void Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}