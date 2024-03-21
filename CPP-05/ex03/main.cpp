/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:15:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 16:40:27 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Intern.hpp"
#include <ctime>

int main (void)
{
	std::srand(std::time(NULL));
	Bureaucrat	philippe("Philippe", 150);
	ShrubberyCreationForm		sc("trees");
	RobotomyRequestForm			rb("NooNoo");

	Intern		npc;
	AForm	*pp = npc.makeForm("presidential pardon", "Puig");
	Bureaucrat  presi("President", 5);
	std::cout << sc;
	std::cout << philippe;
	std::cout << presi;
	philippe.signForm(sc);
	presi.executeForm(sc);
	presi.signForm(sc);
	presi.executeForm(sc);
	philippe.executeForm(sc);
	std::cout << rb;
	presi.signForm(rb);
	presi.executeForm(rb);
	std::cout << *pp;
	presi.signForm(*pp);
	presi.executeForm(*pp);
	presi.decrementGrade();
	presi.executeForm(*pp);
	delete pp;
}