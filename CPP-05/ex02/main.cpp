/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:15:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 16:10:11 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ShrubberyCreationForm.hpp"

int main (void)
{
	Bureaucrat	philippe("Philippe", 150);
	ShrubberyCreationForm		c_42("super important stuff");
	Bureaucrat  presi("President", 1);
	
	std::cout << c_42;
	std::cout << philippe;
	std::cout << presi;
	philippe.signForm(c_42);
	presi.signForm(c_42);
}