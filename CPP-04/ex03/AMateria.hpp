/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:18:02 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/19 15:25:48 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <streamio>

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(std::string const &type)
		AMateria(const AMateria &cpy);
		AMateria& operator=(const AMateria &src);
		~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
}