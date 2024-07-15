/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:53:48 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/12 12:55:59 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << GRAY << "WrongAnimal Constructor called" << RNL;
}

WrongAnimal::WrongAnimal(std::string tp) : type(tp) {

	std::cout << GRAY << "WrongAnimal Type Constructor called" << RNL;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {

	*this = cpy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << RED << "WrongAnimal Destructor called" << RNL;
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "\033[1;33m(?)" << std::endl << "\033[0m";
}

std::string	WrongAnimal::getType(void) const {

	return(this->type);
}