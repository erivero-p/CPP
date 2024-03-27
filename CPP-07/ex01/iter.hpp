/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:41:59 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/27 16:01:16 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
template<typename T, typename ft>
void	iter(T arr, int len, ft fun)
{
	for (int i = 0; i < len; i++)
		fun(arr[i]);
}

template<typename T>
void	ft_print(T c)
{
	std::cout << c;
}