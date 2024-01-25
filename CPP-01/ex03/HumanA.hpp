/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:32:20 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/24 15:16:55 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon	&weapon; //referencia a weapon porque el HumanA siempre debe tener un arma
	public:
		HumanA(std::string name, Weapon &wp);
		~HumanA();
		void	attack();
};