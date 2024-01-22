/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:28:05 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/22 16:14:26 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::~Zombie(void){
	std::cout << "Zombie called " << name << " has been destroyed :c\n";
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::namer(std::string nick)
{
	name = nick;
}
int	main(void)
{
	Zombie	*pepe;

	randomChump("Lola");
	pepe = newZombie("Pepe");
	delete	pepe;
}