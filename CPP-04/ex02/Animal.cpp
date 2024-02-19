/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:53:48 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/19 11:42:33 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	
}
Animal::Animal(std::string tp) : type(tp) {
	
}
Animal::Animal(const Animal &cpy){

	*this = cpy;
}
Animal&	Animal::operator=(const Animal &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}
Animal::~Animal(void) {

}

/* void	Animal::makeSound(void) const {

	std::cout << "\033[1;33m(?)" << std::endl << "\033[0m";
} */

std::string	Animal::getType(void) const {
	return(this->type);
}