/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:26:57 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "Interface.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource(void) {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};