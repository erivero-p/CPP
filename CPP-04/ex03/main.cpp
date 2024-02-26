/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:12:02 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/26 12:06:49 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

void leaksCheck(void)
{
	system("leaks -q Interface");
}
int main(void)
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
}