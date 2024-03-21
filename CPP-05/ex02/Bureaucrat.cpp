/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:46:34 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 13:10:02 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {

}
Bureaucrat::Bureaucrat(const std::string nm, int gr) : name(nm) {

	try {
		if (gr < 1)
			throw(Bureaucrat::GradeTooHighException());
		else if (gr > 150)
			throw(Bureaucrat::GradeTooLowException());
		else
			grade = gr;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
		if (gr < 1)
			grade = 1;
		else
			grade = 150;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.getName()), grade(src.grade) {

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {

	if (this != &src)
		this->grade = src.grade;
	/* name cant be reasigned cause is const */
	return (*this);
}

Bureaucrat::~Bureaucrat() {

}

const std::string &Bureaucrat::getName(void) const {

	return (this->name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->grade);
}

void	Bureaucrat::decrementGrade(void) {

	try {
		if (grade < 150)
			grade++;
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	catch (std::exception &e) {
		std::cerr << e.what();
	}
}

void	Bureaucrat::incrementGrade(void) {

	try {
		if (grade > 1)
			grade--;
		else
			throw(Bureaucrat::GradeTooHighException());
	}
	catch (std::exception &e) {
		std::cerr << e.what();
	}
}

std::ostream& operator<<(std::ostream &oso, const Bureaucrat &bureau) {

	oso << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".\n";
	return (oso);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

	return (RED"[EXEPTION] Grade Too High"RNL);
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {

	return (RED"[EXEPTION] Grade Too Low"RNL);
}

void Bureaucrat::signForm(AForm &fm) {

	if (fm.getSignStatus())
		std::cout << this->name << " couldn't sign" << fm.getName() << " because form is already signed\n";
	else
		fm.beSigned(*this);
}

void Bureaucrat::executeForm(const AForm &fm) {

/* 	if (!fm.getSignStatus())
	{
		std::cout << RED << name << " couldn't execute " << fm.getName() << " because it's not signed yet" << RNL;
		return ;
	} */
	try
	{
		fm.execute(*this);
		std::cout <<  GREEN << name << " executed " << fm.getName() << RNL;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << name << " couldn't execute " << fm.getName() << " because: ";
		std::cerr << e.what();
	}
}
