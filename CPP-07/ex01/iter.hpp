/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:41:59 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/15 15:45:37 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T, typename ft>
/*
 * @brief Applies a function to each element of an array. 
 * @param arr The array on which the function will be applied.
 * @param len The length of the array.
 * @param fun The function that will be applied to each element of the array.
 */
void	iter(T arr, int len, ft fun)
{
	for (int i = 0; i < len; i++)
		fun(arr[i]);
}

template<typename T>
void	printer(T c)
{
	std::cout << c;
}