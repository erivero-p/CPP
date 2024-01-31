/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:43:13 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/31 13:04:16 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) 
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f); //f para indicar que es float y no double
	Fixed const d( b );
	a = Fixed(1.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	if (a > b)
		std::cout << "a > b" << std::endl;
	else
		std::cout << "a <= b" << std::endl;
	a = a + b;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	return (0);
}