/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:37:34 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/06 13:29:35 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << GRAY << "Brain Constructor called" << RNL;
}

Brain::Brain(const Brain &cpy) {

	std::cout << GRAY << "Brain Copy Constructor called" << RNL;
	*this = cpy;
}

Brain&	Brain::operator=(const Brain &src) {

	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void) {

	std::cout << RED << "Brain Destructor called" << RNL;
}