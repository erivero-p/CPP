/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:10:09 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/29 17:21:57 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>

class Span {
private:
	unsigned int	size;
	std::list<int>	stack;
public:
	Span(void);
	Span(unsigned int i);
	Span(const Span& src);
	Span &operator=(const Span& src);
	~Span(void);
	void addNumber(void);
	void shortestSpan(void);
	void longestSpan(void);
	void fillSpan(void);
} ;
