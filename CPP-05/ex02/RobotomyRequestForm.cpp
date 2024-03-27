/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:41:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/27 11:00:22 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default", "defaultTarget", 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string tg) : AForm("Robotomy", tg, 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src) : AForm(src) {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &src) {

	if (this != &src)
		*this = src;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {

	if (!getSignStatus())
		throw(RobotomyRequestForm::NotSignedException());
	else if (getExecGrade() < executor.getGrade())
		throw(RobotomyRequestForm::GradeTooLowException());
	else
	{
		std::cout << BLUE << "BRR....peeeeep...brrrrrakjsdhds..." << std::endl;
		if (std::rand() % 2 == 0)
			std::cout << getTarget() << " succesfully robotomized!" << RNL;
		else
			std::cout << getTarget() << "'s robotomy failed :c" << RNL;
	}
}