/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:53:48 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 09:51:09 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << GRAY << "Animal Constructor called" << RNL;
}

Animal::Animal(std::string tp) : type(tp) {
	
	std::cout << GRAY << "Animal Type Constructor called" << RNL;
}

Animal::Animal(const Animal &cpy){

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

std::string	Animal::getType(void) const {

	return(this->type);
}