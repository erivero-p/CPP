/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:10:09 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/16 16:11:53 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>
#include <limits.h>

class Span
{
private:
	unsigned int	size;
	std::list<int>	stack;
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span& src);
	Span &operator=(const Span& src);
	~Span(void);
	void addNumber(int num);
// finds out the shortest distance between all the numbers stored
	unsigned int shortestSpan(void);
// finds out the longest distance between all the numbers stored
	unsigned int longestSpan(void);
// fills the span receibing a range of iterators
	void fillSpan(std::list<int>::const_iterator first, std::list<int>::const_iterator last);
	class SpanFullException : public std::exception {
		const char *what () const throw();
 	};
	class SpanEmptyException : public std::exception {
		const char *what () const throw();
	};
} ;