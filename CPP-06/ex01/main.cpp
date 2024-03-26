/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:20:39 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/26 15:40:10 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void) {

	Data *ptr = new Data();
	std::cout << "original ptr: " << ptr << std::endl;
	uintptr_t raw = Serializer::serialize(ptr);
	std::cout << "ptr before serialization: " << raw << std::endl;
	Data *des = Serializer::deserialize(raw);
	std::cout << "ptr before deserialization: " << des << std::endl;
}