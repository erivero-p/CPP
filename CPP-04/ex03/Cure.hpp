/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:06:00 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/20 12:17:14 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(const Cure &cpy);
		Cure &operator=(const Cure &src);
		~Cure(void);
		//AMateria* clone(void) const;
		Cure* clone(void) const; //no sé si esto se puede hacer
		void use(ICharacter& target);
} ;