/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:22:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/13 11:46:56 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain *tm; //thinking machine
	public:
		Cat(void);
		Cat(const Cat &cpy);
		Cat&	operator=(const Cat &src);
		~Cat(void);
};