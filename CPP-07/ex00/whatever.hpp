/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:42:36 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/15 14:29:52 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T> //template declaration, 'T' will be a generic type
// Swaps the values of two given arguments. Does not return anything
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
// Compares the two values passed in its arguments and returns the smallest one
template<typename T>
T min(T a, T b) {
	return (a < b) ? a : b;
}
// Compares the two values passed in its arguments and returns the greatest one
template<typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
}
