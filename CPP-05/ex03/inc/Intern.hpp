/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:54:38 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 16:12:01 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &src);
	~Intern();
	AForm *makeForm(std::string type, std::string target);
};

