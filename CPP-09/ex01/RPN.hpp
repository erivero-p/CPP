/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:09:02 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/17 14:34:45 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

class	RPN {
private:
	std::stack<float> stk;
public:
	RPN(void);
	RPN(std::string input);
	RPN(const RPN &src);
	RPN &operator=(const RPN &src);
	~RPN(void);
	void	inputChecker(std::string input);
	float	operate(float a, float b, char op);
	float	polishCalculator(std::string input);
} ;
