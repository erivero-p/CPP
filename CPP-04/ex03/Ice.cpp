/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:14:23 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/20 15:56:09 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {

	this->type = "ice";
}

Ice::Ice(const Ice &cpy) {

	*this = cpy;
}

Ice& Ice::operator=(const Ice &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}

Ice::~Ice(void) {
	
}

Ice* Ice::clone(void) const {

	Ice *cln = new Ice();
	return (cln);
}

void Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}