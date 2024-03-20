/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:15:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/20 14:56:04 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat	philippe("Philippe", 150);
	Form		c_42("super important stuff", 10, 10);
	Bureaucrat  presi("President", 1);
	
	std::cout << c_42;
	std::cout << philippe;
	std::cout << presi;
	philippe.signForm(c_42);
	presi.signForm(c_42);
}