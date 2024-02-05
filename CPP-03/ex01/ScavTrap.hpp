/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:17:41 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/05 11:07:59 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& cpy);
		ScavTrap& operator=(const ScavTrap& src);
		~ScavTrap();
		void	guardGate(void);
};
	//	using ClapTrap::ClapTrap; // al parecer con esto heredo los constructores