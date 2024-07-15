/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:32:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 09:47:55 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	int i = 10;

	Animal* meta[i];
	for (int j = 0; j < i; j++)
	{
		if (j < i / 2)
			meta[j] = new Dog();
		else
			meta[j] = new Cat();
		meta[j]->makeSound();
	}
	while (--i >= 0)
		delete meta[i];
	return (0);
}