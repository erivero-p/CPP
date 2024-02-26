/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:50:30 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/26 11:59:07 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::fSize = 0;
AMateria **Character::floor = NULL;

Character::Character(void) : eqSize(-1) {

	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
		this->floor[i] = NULL;
	}
}

Character::Character(std::string nm) : name(nm), eqSize(-1) {

	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character&	Character::operator=(const Character &src) {

	if (this != &src)
	{
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = src.inventory[i]->clone();
		}
	}
	return (*this);
}

Character::Character(const Character &src) {

	*this = src;
}


Character::~Character(void) {

/* 	for (int i = 0; i <= this->eqSize; i++)
		this->inventory[i]->~AMateria(); */
}

std::string const& Character::getName(void) const {

	return (this->name);
}

void	Character::toFloor(AMateria *m) {

	AMateria **newFloor = new AMateria*[Character::fSize + 1];
	int i = 0;
	while (i++ < Character::fSize)
		newFloor[i] = Character::floor[i];
	newFloor[i] = m;
	if (Character::floor)
		delete[] Character::floor;
	Character::floor = newFloor;
	Character::fSize++;
}

void Character::equip(AMateria* m) {

	if (this->eqSize < 3)
	{
		this->eqSize++;
		this->inventory[this->eqSize] = m;
	}
	else
		this->toFloor(m);
}

void Character::unequip(int idx) {

	if (idx < 0 || idx > 3)
		std::cout << "Wrong index" << std::endl;
	else
	{
		toFloor(inventory[idx]);
		if (idx < eqSize)
		{
			while (idx++ < eqSize)
				inventory[idx] = inventory[idx + 1];
		}
		inventory[idx] = NULL;
		eqSize--;
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

void	Character::displayInventory(void) {

	std::cout << "\033[0;34m";
	for (int i = 0; i <= this->eqSize; i++)
		std::cout << i << ": " << inventory[i]->getType() << std::endl;
	std::cout << "\033[0m";
}
