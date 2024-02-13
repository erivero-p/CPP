/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:27:31 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/13 12:19:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	this->tm = new Brain();
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &cpy) {
	*this = cpy;
}
Cat&	Cat::operator=(const Cat &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}
Cat::~Cat(void){
	std::cout << "Cat Destructor Called" << std::endl;
	delete tm;
}