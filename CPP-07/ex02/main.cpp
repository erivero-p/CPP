/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:54:57 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/04 13:18:14 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{

	std::cout << "**** block with strings *****" << std::endl;
	Array<std::string> strs(2);
	try
	{
		strs[0] = "Hello";
		strs[1] = "World!";
		
		std::cout << "strs[0]: " << strs[0] << std::endl;
		std::cout << "strs[1]: " << strs[1] << std::endl;
		std::cout << "Array size is: " << strs.size() << std::endl;
		std::cout << strs[3];
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
	std::cout << "**** block with ints *****" << std::endl;
	try
	{
		Array<int> ints(3);
		ints[0] = 42;
		ints[1] = 28;
		ints[2] = 16;
		std::cout << "ints[2]: " << ints[2] << std::endl;
		std::cout << "Array size is: " << ints.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
	return (0);
};
