/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:38:36 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/23 15:50:40 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str	= "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string	&ref = str;

	std::cout << &str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}