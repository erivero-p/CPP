/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:20:17 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 15:45:28 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("default", "defaultTarget", 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(std::string tg) : AForm("Pardon", tg, 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src) : AForm(src) {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &src) {

	if (this != &src)
		*this = src;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {

	if (!getSignStatus())
		throw(PresidentialPardonForm::NotSignedExeption());
	else if (getExecGrade() < executor.getGrade())
		throw(PresidentialPardonForm::GradeTooLowException());
	else
	{
		std::cout << PURPLE << getTarget() << " has been pardoned by Zaphod Beeblebrox" << RNL;
	}
}