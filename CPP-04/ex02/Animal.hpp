/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:48:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/19 11:42:27 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Brain.hpp"

class	Animal
{
	protected:
		std::string	type;
	public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &cpy);
	Animal&	operator=(const Animal &src);
	virtual ~Animal(void);
	virtual void	makeSound(void) const = 0;
	std::string	getType(void) const;
};