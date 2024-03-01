/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:18:13 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/01 15:27:27 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "Interface.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);
		~Ice(void);
		virtual Ice			*clone(void) const;
		virtual void		use(ICharacter &target);
};
