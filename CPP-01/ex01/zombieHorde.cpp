/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:48:10 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/23 12:50:00 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i = 0;

	Zombie *horde = new Zombie[N];
	for (i = 0; i < N; i++)
		horde[i].namer(name);
	return (horde);
}
