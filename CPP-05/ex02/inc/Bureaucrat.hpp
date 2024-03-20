/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:14:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 15:31:22 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../../colours.hpp"
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};
	class GradeTooLowException  : public std::exception {
		const char *what() const throw();
	};
	Bureaucrat();
	Bureaucrat(const std::string nm, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &src);
	~Bureaucrat();
	const std::string	&getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	
	void signForm(AForm &fm);
};

std::ostream& operator<<(std::ostream &, const Bureaucrat &);
