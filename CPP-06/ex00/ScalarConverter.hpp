/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:52 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/26 13:24:10 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <limits>
#include <cfloat>
#include <cmath>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &src);
public:
	~ScalarConverter();
	static void	convert(const std::string);
};

enum {
	ERROR = -1,
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE,
	OFLOW,
	PSF,
	PSD
};