/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:27:31 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:38:35 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	std::cout << GRAY << "Cat Constructor called" << RNL;
	this->type = "Cat";
}

Cat::Cat(const Cat &cpy) {

	std::cout << GRAY << "Cat Copy Constructor called" << RNL;
	*this = cpy;
}

Cat&	Cat::operator=(const Cat &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat(void) {

	std::cout << RED << "Cat Destructor called" << RNL;
}

void	Cat::makeSound(void) const {
	std::cout << "\033[1;33m";
	std::cout << "Prrr...meow" << std::endl;
	std::cout << "\033[0m";
}