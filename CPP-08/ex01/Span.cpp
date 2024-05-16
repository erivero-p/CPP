/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:09:35 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/16 16:06:56 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {

	this->size = 0;
}

Span::Span(unsigned int N) {

	this->size = N;
}

Span::Span(const Span& src) {

	this->size = src.size;
	this->stack = src.stack;
}

Span &Span::operator=(const Span& src) {

	if (this != &src)
	{
		this->size = src.size;
		this->stack = src.stack;
	}
	return (*this);
}

Span::~Span(void) {
	
}

void Span::addNumber(int num) {

	if (this->stack.size() >= this->size)
		throw(Span::SpanFullException());
	stack.push_back(num);
}

unsigned int Span::longestSpan(void) {

	if (this->stack.empty() >= this->size || this->stack.size() < 2)
		throw(Span::SpanEmptyException());
	std::list<int>::iterator	min = std::min_element(stack.begin(), stack.end());
	std::list<int>::iterator	max = std::max_element(stack.begin(), stack.end());
	return (*max - *min);
}

unsigned int  Span::shortestSpan(void) {

	if (this->stack.empty() || this->stack.size() < 2)
		throw(Span::SpanEmptyException());
	std::list<int> sorted = stack;
	sorted.sort();
	int diff = INT_MAX;
	for (std::list<int>::iterator i = sorted.begin(); std::next(i) != sorted.end(); i++) {
		int current_diff = *(std::next(i)) - *i;
		if (current_diff < diff)
			diff = current_diff;
	}
	return (diff);
}

void Span::fillSpan(std::list<int>::const_iterator first, std::list<int>::const_iterator last) {

	if (std::distance(first, last) > size)
		throw(Span::SpanFullException());
	stack.insert(stack.end(), first, last);
}

const char *Span::SpanFullException::what() const throw() {

	return("There's no space left on the Span for the required insertion");
}

const char *Span::SpanEmptyException::what() const throw() {

	return("There's not enough elements on Span to calculate");
}
