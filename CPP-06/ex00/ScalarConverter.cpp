/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:48:15 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/22 17:09:33 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	ft_filter(std::string str) {

	char *endptr;
	long int	aux;

	if (str.length() == 1 && !(std::isdigit(str[0])))
		return (CHAR);
	aux = strtol(str.c_str(), &endptr, 10);
	if (endptr[0] == 0)
	{
		if (aux > INT_MIN && aux < INT_MAX)
			return (OFLOW);
		return (INT);
	}
	aux = strtod(str.c_str(), &endptr);
	if (endptr[0] == 'f' || endptr[0] == 'F')
	{
		if (aux > FLT_MIN && aux < FLT_MAX)
			return (OFLOW);
		return (FLOAT);
	}
	if (endptr[0] == 0)
	{
		if (aux > DBL_MIN && aux < DBL_MAX)
			return (OFLOW);
		return (DOUBLE);
	}
/* 	if (str == "nanf" || str == "+inff" || str == "-inff")
		return (PSL); pdte gestionar pseudoliterales*/
	else
		return (ERROR);
}

void	print_cast_char(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	print_cast_int(int n)
{
	char c = static_cast<char>(n);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else	
		std::cout << "char non printable" << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
}

void	print_cast_float(float f)
{
	char c = static_cast<char>(f);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else	
		std::cout << "char non printable" << std::endl;
	std::cout << "int: " << f << std::endl;
	std::cout << "float: " << f << (std::round(f) == f ? ".0" : "") << std::endl;
	std::cout << "double: " << static_cast<double>(f) << (std::round(f) == f ? ".0" : "") << std::endl;
}

void	print_cast_double(double d)
{
	char c = static_cast<char>(d);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else	
		std::cout << "char non printable" << std::endl;
	std::cout << "int: " << d << std::endl;
	std::cout << "float: " << static_cast<float>(d) << (std::round(d) == d ? ".0f" : "f") << std::endl;
	std::cout << "double: " << d << (std::round(d) == d ? ".0" : "") << std::endl;
}


static void	convert(const std::string str) {

	switch (ft_filter(str))
	{
	case CHAR:
		print_cast_char(str[0]);
		break ;
	case INT:
		print_cast_int(atoi(str.c_str()));
		break ;
	case FLOAT:
		print_cast_float(atof(str.c_str()));
		break ;
	case DOUBLE:
		print_cast_double(atof(str.c_str()));
		break ;
	default:
		break;
	}
}