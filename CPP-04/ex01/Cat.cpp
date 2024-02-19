/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:27:31 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/19 11:12:47 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	this->tm = new Brain();
}

Cat::Cat(const Cat &cpy) {
	*this = cpy;
}
Cat&	Cat::operator=(const Cat &src) {

	if (this != &src)
	{
		delete this->tm;
		this->tm = new	Brain(*src.tm);
	}
	return (*this);
}
Cat::~Cat(void) {
	std::cout << "Catn't" << std::endl;
	delete tm;
}

void	Cat::makeSound(void) const {
	std::cout << "\033[1;33m";
	std::cout << "Prrr...meow" << std::endl;
	std::cout << "\033[0m";
}