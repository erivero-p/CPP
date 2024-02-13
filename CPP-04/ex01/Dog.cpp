/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:31:42 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/13 16:37:24 by erivero-         ###   ########.fr       */
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
		this->type = src.type;
		for (int i = 0; i < 100; i++)
			this->tm[i] = src.tm[i];
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