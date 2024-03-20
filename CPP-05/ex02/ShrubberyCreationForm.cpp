/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:57:26 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 16:13:17 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Default", "DefaultTarget", 145, 137){

	name = "Default";
	toSign = 145;
	toExec = 137;
	sgnd = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string nm) {

	name = name;
	toSign = 145;
	toExec = 137;
	sgnd = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) : name(src.name), toSign(src.toSign), toExec(src.toExec) {

	sgnd = src.sgnd;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src) {

	if (this != &src)
		sgnd = src.sgnd;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) {
	try
	{
		if (toExec <= executor.getGrade())
			std::cout << "ELI should create a file <target>_shrubbery in the working directory, and writes ASCII trees\n"
		else 
			throw(ShrubberyCreationForm::GradeTooLowException.what());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}