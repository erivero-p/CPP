/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:00:13 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/20 16:08:43 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		AMateria *inventory[4];
		std::string	name;
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		Character&	operator=(const Character &src);
		~Character(void);
		std::string const& getName(void) const;
};