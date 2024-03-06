/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:53:48 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/06 14:05:17 by erivero-         ###   ########.fr       */
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

std::string	Animal::getType(void) const {
	return(this->type);
}