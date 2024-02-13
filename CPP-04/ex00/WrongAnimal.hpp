/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:48:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/12 12:49:01 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &cpy);
	WrongAnimal&	operator=(const WrongAnimal &src);
	virtual ~WrongAnimal(void);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;
};