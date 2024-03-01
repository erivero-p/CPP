/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:59:24 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/01 15:42:15 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "Interface.hpp"

class Character : public ICharacter {

	private:
		std::string	name;
		AMateria	*inventory[4];
		int			iSize;
	public:
		Character(void);
		Character(const std::string);
		Character(const Character &);
		Character &operator=(const Character &);
		~Character(void);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		void	toFloor(AMateria *left);
		static	AMateria	**floor;
		static	int		fSize;
} ;