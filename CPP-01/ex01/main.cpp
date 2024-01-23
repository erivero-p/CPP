/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:15:13 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/23 13:15:54 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	i = 0;

	Zombie *horde = zombieHorde(10, "Joselito");
	for (i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;
}