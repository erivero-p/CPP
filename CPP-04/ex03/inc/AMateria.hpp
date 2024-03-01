/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:46:34 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/01 11:52:45 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "Interface.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria &operator=(AMateria const & src);
		virtual ~AMateria(void);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};