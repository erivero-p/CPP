/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:26:58 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/19 15:55:03 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){

}

AMateria::AMateria(std::string const &tpe) : type(tpe) {

}

AMateria::AMateria(const AMateria &cpy){

	*this = cpy;
}

AMateria& AMateria::operator=(const AMateria &src){

	if (this != &src)
		this->type = src.type;
}

AMateria::~AMateria(void) {

}

std::string const &AMateria::getType() const {
	
	return (this->type);
}