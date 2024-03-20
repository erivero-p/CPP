/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:32:37 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 14:18:16 by erivero-         ###   ########.fr       */
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

Form::~Form() {

}

const char *Form::GradeTooHighException::what() const throw() {

	return (YELLOW"[FORM] Grade Too High"RNL);
}
const char *Form::GradeTooLowException::what() const throw() {
	
	return (YELLOW"[FORM] Grade Too Low"RNL);
}

const std::string	Form::getName(void) {

	return (this->name);
}
bool	Form::getSignStatus(void) {
	
	return (this->sgnd);
}
int	Form::getSignRange(void) {
	
	return (this->toSign);
}
int	Form::getExecRange(void) {

	return (this->toExec);
}

void	Form::beSigned(Bureaucrat &bureau) {

	try {
		if (bureau.getGrade() <= toSign) // the lower number the higher range
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