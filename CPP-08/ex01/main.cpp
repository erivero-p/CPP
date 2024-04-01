/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:04:24 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/01 16:56:10 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

std::list <int> ft_list(void)
{
	std::list<int> stack;
	stack.push_back(3);
	stack.push_back(14);
	stack.push_back(15);
	stack.push_back(9);
	return(stack);
}

int	main(void) {

	Span A(5);
	std::list<int> lst = ft_list();

	try {
		A.fillSpan(lst.begin(), lst.end());
		A.addNumber(42);
		std::cout << "Longest span: " << A.longestSpan() << std::endl;
		std::cout << "Shortest span: " << A.shortestSpan() << std::endl;
		A.addNumber(0); //this shouldn't enter
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
}