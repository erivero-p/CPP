/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:32:37 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 15:12:00 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AForm.hpp"

AForm::AForm() : name("default"), target("defaultTarget"), toSign(150), toExec(150) {

	this->sgnd = false;
}

AForm::AForm(const std::string nm, const std::string tg, const int ts, const int te) : name(nm), target(tg), toSign(ts), toExec(te){

	this->sgnd = false;
	try
	{
		if (toSign < 1 || toExec < 1)
			throw(AForm::GradeTooHighException());
		else if (toSign > 150 || toExec > 150)
			throw(AForm::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

AForm::AForm(const AForm &src) : name(src.name), toSign(src.toSign), toExec(src.toExec) {

	this->sgnd = src.sgnd;
}

AForm &AForm::operator=(const AForm &src) {

	if (this != &src)
		this->sgnd = src.sgnd;
	return (*this);
}

AForm::~AForm() {

}

const char *AForm::GradeTooHighException::what() const throw() {

	return (RED"[AForm] Grade Too High"RNL);
}

const char *AForm::GradeTooLowException::what() const throw() {

	return (RED"Grade Too Low"RNL);
}

const char *AForm::NotSignedExeption::what() const throw() {

	return (RED"Form Not Signed"RNL);
}

const std::string	AForm::getName(void) const {

	return (this->name);
}

const std::string	AForm::getTarget(void) const {

	return (this->target);
}

bool	AForm::getSignStatus(void) const {
	
	return (this->sgnd);
}
int	AForm::getSignGrade(void) const {
	
	return (this->toSign);
}
int	AForm::getExecGrade(void) const {

	return (this->toExec);
}

void	AForm::beSigned(Bureaucrat &bureau) {

	try 
	{
		if (bureau.getGrade() <= toSign) // the lower number the higher Grade
		{
			this->sgnd = true;
			std::cout << GREEN << bureau.getName() << " signed ";
			std::cout << this->getName() << RNL;
		}
		else
			throw(AForm::GradeTooLowException());
	}
	catch(const std::exception& e) {
		std::cout << RED << bureau.getName() << " couldn't sign " << name << " because: ";
		std::cerr << e.what();
	}
}

std::ostream& operator<<(std::ostream &oso, const AForm &fm) {

	oso << "AForm: " << fm.getName() << ", required grade to be signed: " << fm.getSignGrade() \
	<< ", required grade to be executed: " << fm.getExecGrade() << std::endl;
	return (oso);
}
