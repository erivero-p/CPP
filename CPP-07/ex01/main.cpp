/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:44:29 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/15 15:45:54 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {

	std::cout << "-		[test with chars]		-" << std::endl;
	std::string str = "Hello!";
	::iter(str.c_str(), str.length(), printer<char>);
	std::cout << std::endl;
	std::cout << "-		[test with ints]		-" << std::endl;
	int arr[5] = {0, 1, 2, 3, 4};
	::iter(arr, 5, printer<int>);
	std::cout << std::endl;
}