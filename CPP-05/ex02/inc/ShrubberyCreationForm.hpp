/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:34:52 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 12:24:12 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	/* data */
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string nm, std::string tg);
	ShrubberyCreationForm(ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	void	execute(Bureaucrat const &executor) const;
	//it has to be const cause Bureaucrat::execture receibes a const Form

};

