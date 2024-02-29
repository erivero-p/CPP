/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:23:55 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/29 12:19:24 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria	*learnt[4];
		int			lSize;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		MateriaSource& operator=(const MateriaSource &src);
		~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
} ;