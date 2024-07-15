/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:17:10 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:37 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
# define	WEAPON_HPP

# include <iostream>
class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon(void);
	std::string &getType(void);
	void setType(std::string type);
};

#endif