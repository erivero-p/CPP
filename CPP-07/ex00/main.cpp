/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:29:07 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:10:45 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
	std::cout << "-		[test with ints]		-" << std::endl;
	int a = 4;
	int b = 2;
	::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "min: " << ::min(a, b) << std::endl;
	std::cout << "max: " << ::max(a, b) << std::endl;
	
	std::cout << "-		[test with strings]		-" << std::endl;
	std::string c = "Hello";
	std::string d = "World";
	::swap(c, d);
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "min: " << ::min(c, d) << std::endl;
	std::cout << "max:  " << ::max(c, d) << std::endl;
	return (0);
}