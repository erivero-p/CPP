/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:12:10 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 16:38:16 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Intern.hpp"

Intern::Intern() {

}
Intern::Intern(const Intern &src) {

	*this = src;
}
Intern &Intern::operator=(const Intern &src) {

	if (this != &src)
		*this = src;
	return (*this);
}
Intern::~Intern() {

}
AForm *Intern::makeForm(std::string type, std::string target) {

	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;
	
	while (i < 3)
	{
		if (forms[i] == type)
			break ;
		i++;
	}
	switch (i) {
		case 0:
			std::cout << "Intern creates a Presidential Pardon Form" << std::endl;
			return (new PresidentialPardonForm(target));
		case 1:
			std::cout << "Intern creates a Robotomy Request Form" << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates a Shrubbery Creation Form" << std::endl;
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << RED << "Requested Form doesn't exist" << std::endl;
			return (NULL);
	}
}