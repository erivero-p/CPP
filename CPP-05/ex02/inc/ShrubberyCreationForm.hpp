/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:34:52 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 15:58:22 by erivero-         ###   ########.fr       */
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
	ShrubberyCreationForm(std::string nm);
	ShrubberyCreationForm(ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &src);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const &executor);
};

