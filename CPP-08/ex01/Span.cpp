/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:09:35 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/01 16:15:22 by erivero-         ###   ########.fr       */
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

	try {
		if (this->stack.size() >= this->size)
			throw(Span::SpanFullException());
		stack.push_back(num);
	}
	catch (std::exception &e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
}

unsigned int Span::longestSpan(void) {

	try {
		if (this->stack.empty() >= this->size)
			throw(Span::SpanEmptyException());
		std::list<int>::iterator	min = std::min_element(stack.begin(), stack.end());
		std::list<int>::iterator	max = std::max_element(stack.begin(), stack.end());
		return (*max - *min);
	}
	catch (std::exception &e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
	return (0);
}

unsigned int  Span::shortestSpan(void) {

	try {
		if (this->stack.empty() >= this->size)
			throw(Span::SpanEmptyException());
		std::list<int> sorted = stack;
		sorted.sort();
		int diff = INT_MAX;
		for (std::list<int>::iterator i = sorted.begin(); i != sorted.end(); i++) {
			int current_diff = *(std::next(i)) - *i;
			if (current_diff < diff)
				diff = current_diff;
		}
		return (diff);
	}
	catch (std::exception &e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
	return (0);
}
void Span::fillSpan(std::list<int>::const_iterator first, std::list<int>::const_iterator last) {

	try {
		if (std::distance(first, last) > size)
			throw(Span::SpanFullException());
		stack.insert(stack.end(), first, last);
	}
	catch (std::exception &e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m\n";
	}
}

const char *Span::SpanFullException::what() const throw() {
	
	return("There's no space left on the Span for the required insertion");
}

const char *Span::SpanEmptyException::what() const throw() {
	
	return("Span is empty yet");
}
