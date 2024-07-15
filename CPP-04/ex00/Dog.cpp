/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:31:42 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(void) {

	this->type = "Dog";
	std::cout << GRAY << "Dog Constructor called" << RNL;
}

Dog::Dog(const Dog &cpy) : Animal(cpy) {

	std::cout << GRAY << "Dog Copy Constructor called" << RNL;
	*this = cpy;
}

Dog&	Dog::operator=(const Dog &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}

Dog::~Dog(void) {

	std::cout << RED << "Dog Destructor called" << RNL;
}

void	Dog::makeSound(void) const {
	std::cout << "\033[1;33m";
	std::cout << "Woof woof!" << std::endl;
	std::cout << "\033[0m";
}