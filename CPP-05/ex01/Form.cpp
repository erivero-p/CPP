/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:32:37 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:07:30 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name ("default"), toSign(150), toExec(150) {

	this->sgnd = false;
}

Form::Form(const std::string nm, const int ts, const int te) : name(nm), toSign(ts), toExec(te){

	this->sgnd = false;
	try
	{
		if (toSign < 1 || toExec < 1)
			throw(Form::GradeTooHighException());
		else if (toSign > 150 || toExec > 150)
			throw(Form::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

Form::Form(const Form &src) : name(src.name), toSign(src.toSign), toExec(src.toExec){

	this->sgnd = src.sgnd;
}

Form &Form::operator=(const Form &src) {

	if (this != &src)
		this->sgnd = src.sgnd;
	return (*this);
}

Form::~Form(void) {

}

const char *Form::GradeTooHighException::what() const throw() {

	return (YELLOW"[FORM] Grade Too High"RNL);
}

const char *Form::GradeTooLowException::what() const throw() {
	
	return (YELLOW"[FORM] Grade Too Low"RNL);
}

const std::string	Form::getName(void) const {

	return (this->name);
}

bool	Form::getSignStatus(void) const {
	
	return (this->sgnd);
}

int	Form::getSignGrade(void) const {
	
	return (this->toSign);
}

int	Form::getExecGrade(void) const {

	return (this->toExec);
}

void	Form::beSigned(Bureaucrat &bureau) {

	try 
	{
		if (bureau.getGrade() <= toSign) // the lower number the higher Grade
		{
			this->sgnd = true;
			std::cout << GREEN << bureau.getName() << " signed ";
			std::cout << this->getName() << RNL;
		}
		else
			throw(Form::GradeTooLowException());
	}
	catch(const std::exception& e) {
		std::cout << YELLOW << bureau.getName() << " couldn't sign " << name << " because: ";
		std::cerr << e.what();
	}
}

std::ostream& operator<<(std::ostream &oso, const Form &fm) {

	oso << "Form: " << fm.getName() << ", required grade to be signed: " << fm.getSignGrade() \
	<< ", required grade to be executed: " << fm.getExecGrade() << std::endl;
	return (oso);
}
