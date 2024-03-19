/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:55:12 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/19 13:15:13 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../colours.hpp"
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				sgnd;
	const int			toSign;
	const int			toExec;
public:
	Form();
	Form(const std::string nm, const int ts, const int te);
	Form(const Form &src);
	Form &operator=(const Form &src);
	~Form();

	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};
	class GradeTooLowException  : public std::exception {
		const char *what() const throw();
	};

	const std::string	getName(void);
	bool				getSignStatus(void);
	const int			getSignRange(void);
	const int			getExecRange(void);

	void	beSigned(Bureaucrat &bureau);
};

std::ostream& operator<<(std::ostream &, const Form &);

