/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:55:42 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 09:54:47 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Interface.hpp"

AMateria::AMateria(void) : type("Undefined") {

	std::cout << LGRAY << "AMateria Constructor called" << RNL;
}

AMateria::AMateria(std::string const & tp) : type(tp) {

	std::cout << LGRAY << "AMateria Type Constructor called" << RNL;
}

AMateria::AMateria(AMateria const & src){

	std::cout << LGRAY << "AMateria Copy Constructor called" << RNL;
	*this = src;
}

AMateria &AMateria::operator=(AMateria const & src) {

	if (this != &src)
		this->type = src.getType();
	return (*this);
}

AMateria::~AMateria(void) {

	std::cout << RED << "AMateria Destructor called" << RNL;
}

std::string const &AMateria::getType(void) const {

	return (this->type);
}

void AMateria::use(ICharacter& target) {

	std::cout << BOLD;
	std::cout << "* Undefined behaviour to: " << target.getName() << " *";
	std::cout << RNL;
}