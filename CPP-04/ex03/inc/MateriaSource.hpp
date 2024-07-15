/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:28:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:37 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "Interface.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria	*learnt[4];
	int			lSize;
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	MateriaSource& operator=(const MateriaSource &src);
	~MateriaSource(void);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
} ;

