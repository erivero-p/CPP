/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:16 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/15 16:33:51 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {

}

RPN::RPN(std::string input) {

 	if (input.find_first_not_of("0123456789+-*/ ") != input.npos)
		throw std::runtime_error("Error - wrong input");
	this->polishCalculator(input);
}

RPN::RPN(const RPN &src) {
	
}

RPN &RPN::operator=(const RPN &src) {
	
}

RPN::~RPN(void) {
	
}

float	RPN::operation(char c, float a, float b) {
	
}

void	RPN::polishCalculator(std::string input) {

	float a;
	float b;

	for (int i = 0; input[i]; i++) {
		if (isdigit(input[i]))
			st.push(atof(&input[i]))
	}
}
