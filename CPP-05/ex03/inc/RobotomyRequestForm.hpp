/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:39:42 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 15:44:31 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <cstdlib> // Para std::rand y std::srand


class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string tg);
	RobotomyRequestForm(RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm &src);
	~RobotomyRequestForm();
	void	execute(Bureaucrat const &executor) const;
};