/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:28:19 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/15 16:11:31 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> stack;
//	std::list<int> stack;
	stack.push_back(3);
	stack.push_back(14);
	stack.push_back(15);
	stack.push_back(9);

	printStack(stack);
	std::cout << "[test 1]: searching 14" << std::endl;
	try {
		easyfind(stack, 14);
	}
	catch (const std::exception &e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
	std::cout << "[test 2]: searching 21" << std::endl;
	try {
		easyfind(stack, 21);
	}
	catch (const std::exception &e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
}