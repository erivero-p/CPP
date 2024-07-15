/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:22:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/12 12:30:31 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
	Brain *tm;
public:
	WrongCat(void);
	WrongCat(const WrongCat &cpy);
	WrongCat&	operator=(const WrongCat &src);
	~WrongCat(void);
	void	makeSound(void) const;
};