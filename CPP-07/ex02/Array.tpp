/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:01:18 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/02 13:21:35 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) {

	elements = NULL;
	count = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {

	elements = new T[n];
	count = n;
}

template<typename T>
Array<T>::Array(const Array &src) {

	elements = new T[src.count];
	for (unsigned int i = 0; i <= src.count; i++)
		elements[i] = src.elements[i];
	count = src.count;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &src) {

	if (this != &src)
	{
		if (elements)
			delete [] elements;
		elements = new T[src.count];
		for (int i = 0; i < src.count; i++)
			elements[i] = src.elements[i];
		count = src.count;
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	if (elements)
		delete [] elements;
}

template<typename T>
unsigned int Array<T>::size() const {
	return (count);
}

template<typename T>
T	&Array<T>::operator[](unsigned int nb) {

	if (nb <= count)
			return (elements[nb]);
	throw (Array<T>::OWException());
}

template<typename T>
const char *Array<T>::OWException::what() const throw() {

	return("[EXCEPTION] required index is out of bounds");
}
