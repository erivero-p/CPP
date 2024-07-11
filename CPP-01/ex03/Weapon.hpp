/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:17:10 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:05:01 by erivero-         ###   ########.fr       */
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
	~Weapon();
	std::string &getType();
	void setType(std::string type);
};

#endif