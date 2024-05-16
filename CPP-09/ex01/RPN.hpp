/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:09:02 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/15 16:29:07 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

class	RPN {
private:
	std::stack<float> st;
public:
	RPN(void);
	RPN(std::string input);
	RPN(const RPN &src);
	RPN &operator=(const RPN &src);
	~RPN(void);
	float	operation(char c, float a, float b);
	void	polishCalculator(std::string input);
} ;

/* 	if (arg.find_first_not_of("0123456789+-*/ ") != arg.npos)
		throw std::runtime_error("Error - wrong input"); */