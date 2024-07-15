/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:18:13 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/01 11:24:05 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "Interface.hpp"

class Cure : public AMateria {
public:
	Cure(void);
	Cure(const Cure &src);
	Cure &operator=(const Cure &src);
	~Cure(void);
	virtual Cure			*clone(void) const;
	virtual void		use(ICharacter &target);
};
