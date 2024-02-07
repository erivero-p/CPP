/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:42:19 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/07 12:56:51 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& cpy);
		DiamondTrap& operator=(const DiamondTrap& src);
		~DiamondTrap();
		void	attack(const std::string& target);
		void	displayStatus();
		void whoAmI(void);
};