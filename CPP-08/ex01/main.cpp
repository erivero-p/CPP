/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:04:24 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/16 16:16:53 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {

	Span A(5);
	std::list<int> lst;
	lst.push_back(3);
	lst.push_back(14);
	lst.push_back(15);
	lst.push_back(9);

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
	return (0);
}