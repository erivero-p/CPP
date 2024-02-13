/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:27:31 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/12 12:52:57 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &cpy) {

	*this = cpy;	
}
WrongCat&	WrongCat::operator=(const WrongCat &src) {

	if (this != &src)
		this->type = src.type;
	return (*this);
}
WrongCat::~WrongCat(void){
	
}