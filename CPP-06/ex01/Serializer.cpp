/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:46:11 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/26 15:55:59 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){
	
}

Serializer::Serializer(const Serializer &src) {

	(void)src;
}

Serializer::~Serializer(void) {

}

Serializer &Serializer::operator=(const Serializer &src) {

	(void)src;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw) {
	
	return (reinterpret_cast<Data *>(raw));
}