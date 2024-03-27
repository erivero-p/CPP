/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:42:36 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/27 12:27:47 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T> //template declaration, 'T' will be a generic type
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T a, T b) {
	return (a < b) ? a : b;
}

template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
