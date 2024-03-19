/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:46:34 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/19 13:22:13 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

Bureaucrat::signForm(Form &fm) {

	if (fm.getSignedStatus())
		std::cout << this->name << " couldn't sign" << fm.getName() << " because form is already signed\n";
	else
}
