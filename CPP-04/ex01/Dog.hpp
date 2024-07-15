/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:31:00 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 09:47:49 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
private:
	Brain *tm;
public:
	Dog(void);
	Dog(const Dog &cpy);
	Dog&	operator=(const Dog &src);
	~Dog(void);
	void	makeSound(void) const;
};