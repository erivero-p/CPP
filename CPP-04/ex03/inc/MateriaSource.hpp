/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:28:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/04 12:06:27 by erivero-         ###   ########.fr       */
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
		~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
} ;

/* class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_learnedMaterias[4];
		int			_matLearned;
	public:
	// empty constructor
		MateriaSource(void);
	// copy constructor
		MateriaSource(const MateriaSource &);
	// Destructor
		~MateriaSource(void);
	// equal operator overolad
		MateriaSource &operator= (const MateriaSource &);
	// inherited methods
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const &type);
}; */