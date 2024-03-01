/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:20:04 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/01 15:40:14 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Interface.hpp"

Ice::Ice(void) {

	std::cout << LGRAY << "Ice Constructor called" << RNL;
	this->type = "ice";
}

Ice::Ice(Ice const & src) {

	std::cout << LGRAY << "Ice Copy Constructor called" << RNL;
	*this = src;
}
Ice &Ice::operator=(Ice const & src) {

	if (this != &src)
		this->type = src.getType();
	return (*this);
}
Ice::~Ice(void) {

	std::cout << RED << "Ice Destructor called" << RNL;
}

void Ice::use(ICharacter& target) {

	std::cout << BOLD;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
	std::cout << RNL;
}

Ice*	Ice::clone(void) const {
//llamamos al constructor de copia
	return (new Ice(*this));
}