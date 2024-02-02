/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:17:41 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/02 16:37:22 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		using ClapTrap::ClapTrap; // al parecer con esto heredo los constructores
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& cpy);
		ScavTrap &operator=(const ScavTrap& src);
		ScavTrap();
		~ScavTrap();
		void	guardGate(void);
};