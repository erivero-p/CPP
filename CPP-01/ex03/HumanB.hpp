/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:32:20 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/24 15:17:00 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon	*weapon; //puntero a Weapon porque el HumanB puede no tener un arma
	public:
		HumanB(std::string	name);
		~HumanB();
		void	setWeapon(Weapon *wp);
		void	attack();
};