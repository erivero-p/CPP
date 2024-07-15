/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:14:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:07:30 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../../colours.hpp"
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string	name;
	int					grade;
public:
	class GradeTooHighException : public std::exception {
		const char *what(void) const throw();
	};
	class GradeTooLowException  : public std::exception {
		const char *what(void) const throw();
	};
	Bureaucrat(void);
	Bureaucrat(const std::string nm, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &src);
	~Bureaucrat(void);
	const std::string	&getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	
	void signForm(AForm &fm);
	void executeForm(AForm const &fm);
};

std::ostream& operator<<(std::ostream &, const Bureaucrat &);
