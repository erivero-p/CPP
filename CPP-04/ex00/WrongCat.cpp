/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:27:31 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/18 11:32:29 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {

	std::cout << GRAY << "WrongCat Constructor called" << RNL;
	this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &cpy) {

	std::cout << GRAY << "WrongCat Copy Constructor called" << RNL;
	*this = cpy;	
}
WrongCat&	WrongCat::operator=(const WrongCat &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}
WrongCat::~WrongCat(void){
	
	std::cout << GRAY << "WrongCat Destructor called" << RNL;
}

void	WrongCat::makeSound(void) const {
	std::cout << "\033[1;33m";
	std::cout << "Prrr...meow!" << std::endl;
	std::cout << "\033[0m";
}
