/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:12:44 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 09:56:34 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Interface.hpp"

AMateria	**Character::floor = NULL;
int			Character::fSize = 0;

Character::Character(void) : name("Default"), iSize(0) {
	
	std::cout << LGRAY << "Character Constructor called" << RNL;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const std::string nm) : name(nm), iSize(0) {

	std::cout << LGRAY << "Character Name Constructor called" << RNL;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &src) {

	std::cout << LGRAY << "Character Copy Constructor called" << RNL;
	*this = src;
}

Character &Character::operator=(const Character &src) {

	if (this != &src)
	{
		this->iSize = src.iSize;
		this->name = src.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			if (src.inventory[i])
				this->inventory[i] = src.inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void) {
	
	std::cout << RED << "Character Destructor called" << RNL;
}

std::string const & Character::getName() const {

	return (this->name);
}

void Character::equip(AMateria* m) {

	if (this->iSize > 3) 
	{
		std::cout << "Inventory is already full" << NL;
		toFloor(m);	
	}
	else 
	{
		inventory[iSize] = m;
		iSize++;
	}

}

void Character::unequip(int idx) {

	if (idx >= iSize)
		std::cout << "Incorrect index" << NL;
	else 	
	{
		toFloor(inventory[idx]);
		if (idx < iSize) 
		{
			while (idx < iSize) 
			{
				inventory[idx] = inventory[idx + 1];
				idx++;
			}
			inventory[idx] = NULL;
		}
		iSize--;
	}
}

void Character::use(int idx, ICharacter& target) {

	if (idx < 0 || idx > 3)
		std::cout << "Wrong index" << std::endl;
	else if (!this->inventory[idx])
		std::cout << "Slot is empty" << std::endl;
	else
		this->inventory[idx]->use(target);
}

void Character::toFloor(AMateria *left) {

	AMateria **newFloor = new AMateria*[Character::fSize + 1];
	int i = 0;
	while (i++ < Character::fSize)
		newFloor[i] = Character::floor[i];
	newFloor[i] = left;
	if (Character::floor != NULL)
		delete[] Character::floor;
	Character::floor = newFloor;
	Character::fSize++;
}
