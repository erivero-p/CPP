/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:15:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/21 12:28:04 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ShrubberyCreationForm.hpp"

int main (void)
{
	Bureaucrat	philippe("Philippe", 150);
	ShrubberyCreationForm		sc("SC42", "trees");
	Bureaucrat  presi("President", 1);
	
	std::cout << sc;
	std::cout << philippe;
	std::cout << presi;
	philippe.signForm(sc);
	presi.executeForm(sc);
	presi.signForm(sc);
	presi.executeForm(sc);
	philippe.executeForm(sc);
}