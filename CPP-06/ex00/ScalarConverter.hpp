/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:52 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:08:48 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <limits>
#include <cfloat>
#include <cmath>
#include <iomanip>

class ScalarConverter {
private:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &src);
public:
	~ScalarConverter(void);
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