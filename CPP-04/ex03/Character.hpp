/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:00:13 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/22 14:03:54 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		AMateria *inventory[4];
		std::string	name;
		int	eqSize;
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		Character&	operator=(const Character &src);
		~Character(void);
		std::string const& getName(void) const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		void	toFloor(AMateria *m); //para soltar en el suelo
		static AMateria **floor; //estática para que todos lo compartan
		static int fSize; // cuántos ítems hay en el suelo
};