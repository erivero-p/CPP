/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:12:02 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 09:55:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Interface.hpp"


/* int main(void)
{
	Ice ice;
	Cure cure;
	Ice a;
	Cure b;
	Character c1("paco");
	//Character c2("pepe");
	atexit(leaksCheck);
	c1.equip(&cure);
	c1.equip(&ice);
	c1.equip(&a);
	c1.equip(&b);
	c1.displayInventory();
	c1.unequip(1);
	std::cout << std::endl;
	c1.displayInventory();
} */

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	*bob = *me;
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
