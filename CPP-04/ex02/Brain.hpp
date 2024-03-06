/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:29:44 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/06 13:26:56 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain &cpy);
		Brain& operator=(const Brain &src);
		~Brain(void);
};