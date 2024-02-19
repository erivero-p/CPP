/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:31:42 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/19 11:14:47 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	this->type = "Dog";
	this->tm = new Brain();
}

Dog::Dog(const Dog &cpy) : Animal(cpy) {

	*this = cpy;	
}

Dog&	Dog::operator=(const Dog &src) {

	if (this != &src)
	{
		delete this->tm;
		this->tm = new	Brain(*src.tm);
	}
	return (*this);
}

Dog::~Dog(void){
	std::cout << "Dogn't" << std::endl;
	delete tm;
}

void	Dog::makeSound(void) const {
	std::cout << "\033[1;33m";
	std::cout << "Woof woof!" << std::endl;
	std::cout << "\033[0m";
}