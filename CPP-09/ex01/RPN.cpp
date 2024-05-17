/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:16 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/17 14:55:27 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {

}

RPN::RPN(std::string input) {

	try {
		inputChecker(input);
		std::cout << polishCalculator(input) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

RPN::RPN(const RPN &src) {

	*this = src;
}

RPN &RPN::operator=(const RPN &src) {
	if (this != &src)
		this->stk = src.stk;
	return (*this);
}

RPN::~RPN(void) {
	
}
void RPN::inputChecker(std::string input) {
	if (input.find_first_not_of("0123456789+-*/ ") != input.npos)
		throw std::runtime_error("Error: wrong input");
}
float	RPN::operate(float a, float b, char op) {

	switch (op)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '*':
			return (a * b);
		case '/':
			return (a / b);
		default:
			throw std::runtime_error("Error: problem while operating");
	}
}


float	RPN::polishCalculator(std::string input) {

	float a;
	float b;

	for (int i = 0; input[i]; i++) {
		if (input[i] == 32)
			i++;
		if (isdigit(input[i]))
			stk.push(atof(&input[i]));
		else {
			if (stk.size() < 2) //if we dont have already too numbers to operate, will mean that we have too many operators
				throw std::runtime_error("Error: too many operators");
			b = stk.top();
			stk.pop();
			a = stk.top();
			stk.pop();
			stk.push(operate(a, b, input[i]));
		}
	}
	if (stk.size() != 1) //if it ends with more than one numbers will mean that we don't have enough operators
		throw std::runtime_error("Error: not enough operators");
	return (stk.top());
}
