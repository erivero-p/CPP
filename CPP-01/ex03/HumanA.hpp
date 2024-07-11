/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:32:20 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:04:48 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
private:
	std::string	name;
	Weapon	&weapon; // const ref to Weapon, cause the HUmanA always has a weapon
public:
	HumanA(std::string name, Weapon &wp);
	~HumanA();
	void	attack();
};