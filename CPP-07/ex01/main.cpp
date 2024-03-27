/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:44:29 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/27 16:04:24 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {

	std::string str = "Hello!";
	::iter(str.c_str(), str.length(), ft_print<char>);
	std::cout << std::endl;
	int arr[5] = {0, 1, 2, 3, 4};
	::iter(arr, 5, ft_print<int>);
	std::cout << std::endl;
}