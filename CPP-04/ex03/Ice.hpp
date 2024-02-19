/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:06:00 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/19 16:13:47 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Amateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice &cpy);
		Ice &operator=(const Ice &src);
		~Ice(void);
		//AMateria* clone(void) const;
		Ice* clone(void) const; //no sé si esto se puede hacer
		void use(ICharacter& target);
}