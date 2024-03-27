/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:55:12 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 15:12:34 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../../colours.hpp"
#include "Bureaucrat.hpp"
#include <fstream> 

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	const std::string	target;
	bool				sgnd;
	const int			toSign;
	const int			toExec;
public:
	AForm();
	AForm(const std::string nm, const std::string tg, const int ts, const int te);
	AForm(const AForm &src);
	AForm &operator=(const AForm &src);
	~AForm();

	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};
	class GradeTooLowException  : public std::exception {
		const char *what() const throw();
	};
	class NotSignedException  : public std::exception {
		const char *what() const throw();
	};

	const std::string	getName(void) const;
	const std::string	getTarget(void) const;
	bool				getSignStatus(void) const;
	int					getSignGrade(void) const;
	int					getExecGrade(void) const;

	void	beSigned(Bureaucrat &bureau);
	virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream &, const AForm &);
