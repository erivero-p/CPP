/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:53:48 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:38:13 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << GRAY << "Animal Constructor called" << RNL;
}

Animal::Animal(std::string tp) : type(tp) {
	
	std::cout << GRAY << "Animal Type Constructor called" << RNL;
}

Animal::Animal(const Animal &cpy) {

	std::cout << GRAY << "Animal Copy Constructor called" << RNL;
	*this = cpy;
}

Animal&	Animal::operator=(const Animal &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::~Animal(void) {

	std::cout << RED << "Animal Destructor called" << RNL;
}

void	Animal::makeSound(void) const {

	std::cout << "\033[1;33m(?)" << std::endl << "\033[0m";
}

std::string	Animal::getType(void) const {
	return(this->type);
}