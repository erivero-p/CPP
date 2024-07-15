/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:57:26 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", "defaultTarget", 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tg) : AForm("Shrubbery", tg, 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) : AForm(src) {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src) {

	if (this != &src)
		*this = src;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	if (!getSignStatus())
		throw(ShrubberyCreationForm::NotSignedException());
	else if (getExecGrade() < executor.getGrade())
		throw(ShrubberyCreationForm::GradeTooLowException());
	else
	{  //c_str() is to cast from std::string to char *
		std::ofstream	file((this->getTarget() + "_shrubbery").c_str());
		file << "               ,@@@@@@@," << std::endl
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
		<< "       |o|        | |         | |" << std::endl
		<< "       |.|        | |         | |" << std::endl
		<< "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	}
}
