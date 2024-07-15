/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:20:55 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:37 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string tg);
	PresidentialPardonForm(PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(PresidentialPardonForm &src);
	~PresidentialPardonForm(void);
	void	execute(Bureaucrat const &executor) const;
	//it has to be const cause Bureaucrat::execture receibes a const Form
};
