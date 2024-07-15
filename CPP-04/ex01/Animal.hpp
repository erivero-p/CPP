/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:48:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:40:30 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Brain.hpp"

class	Animal {
protected:
	std::string	type;
public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &cpy);
	Animal&	operator=(const Animal &src);
	virtual ~Animal(void);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;
};

#define RED    "\033[1;31m"
#define CYAN    "\033[1;36m"
#define RESET    "\033[0m"
#define RNL    "\033[0m\n"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define GRAY "\033[1;30m"
#define LGRAY "\033[0;37m"
#define BOLD "\033[1;37m"
#define NL "std::endl"