/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:10:32 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:11:27 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array {
private:
	T	*elements;
	unsigned int count; // it could be unsigned (?)
public:
	Array(void); //creates an empty array
	Array(unsigned int n); //creates an array of n elements initalized by default
	Array(const Array &src);
	Array	&operator=(const Array &src);
	~Array(void);
	unsigned int size (void) const;
	T	&operator[](unsigned int nb); //overload [] operator
	class OWException : public std::exception {
		public:
			const char *what(void) const throw();
	};
};

#include "Array.tpp"
