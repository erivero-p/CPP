/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:23:55 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/27 11:15:35 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		this->learnt[i] = NULL;
	this->lSize = 0;
}
MateriaSource::MateriaSource(const MateriaSource &cpy) {
	
	*this = cpy;
}
MateriaSource& MateriaSource::operator=(const MateriaSource &src) {
	
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learnt[i])
				delete this->learnt[i];
			this->learnt[i] = src.learnt[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {

	std::cout << "MS destructor called\n";
	for (int i = 0; i < lSize; i++)
		delete learnt[i];
}
void MateriaSource::learnMateria(AMateria* src) {

	if (lSize > 3)
		std::cout << "MateriaSource cannot learn more than 4 materials\n";
	else
	{
		learnt[lSize] = src->clone(); //no sé si clone o igualar directamente
		lSize++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < lSize)
	{
		if (learnt[i]->getType() == type)
			return (learnt[i]->clone()); //no termino de ver si clone or not clone again
		i++;
	}
	return (0);
}
