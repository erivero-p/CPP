/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:15:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/19 12:57:23 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat philippe("Philippe", 140);
	
	std::cout << philippe;
	philippe.decrementGrade();
	std::cout << philippe;
	philippe.incrementGrade();
	std::cout << philippe;

	Bureaucrat petit("Petit", 0);
	Bureaucrat grande("Grande", 150);
	grande.decrementGrade();
}