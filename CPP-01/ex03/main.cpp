/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:15:54 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:00:24 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main (void)
{
	{
		Weapon club = Weapon("alcachofa de ducha");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("chair");
		HumanB jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("");
		jim.attack();
	}
	return 0;
}