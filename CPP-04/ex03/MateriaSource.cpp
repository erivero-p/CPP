/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:30:19 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Interface.hpp"

MateriaSource::MateriaSource(void) {

	std::cout << LGRAY << "MateriaSource Constructor called" << RNL;
	for (int i = 0; i < 4; i++)
		this->learnt[i] = NULL;
	this->lSize = 0;
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {

	std::cout << LGRAY << "MateriaSource Copy Constructor called" << RNL;
	*this = cpy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src) {
	
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learnt[i])
				delete this->learnt[i];
			if (src.learnt[i])
				this->learnt[i] = src.learnt[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {

	std::cout << RED << "MateriaSource Destructor called" << RNL;
	for (int i = 0; i < 4; i++)
	{
		if (this->learnt[i])
			delete learnt[i];
	}
}

void MateriaSource::learnMateria(AMateria* src) {

	if (lSize > 3)
		std::cout << "MateriaSource cannot learn more than 4 materials\n";
	else
	{
		learnt[lSize] = src;
		lSize++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < lSize)
	{
		if (learnt[i]->getType() == type)
			return (learnt[i]);
		i++;
	}
	return (0);
}
