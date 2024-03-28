/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:48:15 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/28 15:13:19 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {

	(void)src;
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {

	(void)src;
	return (*this);
}

int	ft_filter(std::string str) {

	char *endptr;
	long int	aux;

	if (str == "nan" || str == "+inf" || str == "-inf")
		return (PSF);
	if (str == "nanf" || str == "+inff" || str == "-inff")
		return (PSD);
	if (str == "inff" || str == "inf")
		return (42) ; //to force default case
	if (str.length() == 1 && !(std::isdigit(str[0])))
		return (CHAR);
	aux = strtol(str.c_str(), &endptr, 10);
	if (endptr[0] == '\0')
		return (INT);
	aux = strtod(str.c_str(), &endptr);
	if (endptr[0] == 'f' || endptr[0] == 'F')
			return (FLOAT);
	if (endptr[0] == 0)
		return (DOUBLE);
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

void	print_cast_int(long long int n)
{
	char c = static_cast<char>(n);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else	
		std::cout << "char non printable" << std::endl;
	if (n > INT_MIN && n < INT_MAX)
		std::cout << "int: " << n << std::endl;
	else
		std::cout << "int: non displayable due to overflow" << std::endl;
	if (n > FLT_MIN && n < FLT_MAX)
		std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
	else
		std::cout << "float: non displayable due to overflow" << std::endl;
	if (n > DBL_MIN && n < DBL_MAX)
		std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
	else
		std::cout << "double: non displayable due to overflow" << std::endl;
}

void	print_cast_float(float f)
{
	char c = static_cast<char>(f);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else	
		std::cout << "char non printable" << std::endl;
	if (f > INT_MIN && f < INT_MAX)
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int: non displayable due to overflow" << std::endl;
	if (f > FLT_MIN && f < FLT_MAX)
		std::cout << "float: " << f << (std::round(f) == f ? ".0" : "") << std::endl;
	else
		std::cout << "float: non displayable due to overflow" << std::endl;
	if (f > DBL_MIN && f < DBL_MAX)
		std::cout << "double: " << static_cast<double>(f) << (std::round(f) == f ? ".0" : "") << std::endl;
	else
		std::cout << "double: non displayable due to overflow" << std::endl;
}

void	print_cast_double(double d)
{
	char c = static_cast<char>(d);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else	
		std::cout << "char non printable" << std::endl;
	if (d > INT_MIN && d < INT_MAX)
		std::cout << "int: " << d << std::endl;
	else
		std::cout << "int: non displayable due to overflow" << std::endl;
	if (d > FLT_MIN && d < FLT_MAX)
		std::cout << "float: " << static_cast<float>(d) << (std::round(d) == d ? ".0f" : "f") << std::endl;
	else
		std::cout << "float: non displayable due to overflow" << std::endl;
	if (d > DBL_MIN && d< DBL_MAX)
		std::cout << "double: " << d << (std::round(d) == d ? ".0" : "") << std::endl;
	else
		std::cout << "double: non displayable due to overflow" << std::endl;
}
void	print_cast_psel(std::string str, int flag)
{
	std::cout << "char: impossible to display" << std::endl;
	std::cout << "int:  impossible to display" << std::endl;
	std::cout << "float: " << str << (flag == 1 ? "f" : "") << std::endl;
	if (flag == 1) // if its double it will be fully displayed
		std::cout << "double: " << str << std::endl;
	else // if it was a floaat, its displayed w/out the 'f'
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
}

void	ScalarConverter::convert(const std::string str) {

	switch (ft_filter(str))
	{
	case CHAR:
		print_cast_char(str[0]);
		break ;
	case INT:
		print_cast_int(atol(str.c_str()));
		break ;
	case FLOAT:
		print_cast_float(atof(str.c_str()));
		break ;
	case DOUBLE:
		print_cast_double(atof(str.c_str()));
		break ;
	case PSF:
		print_cast_psel(str, 1);
		break ;
	case PSD:
		print_cast_psel(str, 0);
		break ;
	default:
		std::cout <<  "\033[0;31mError: input impossible to convert\033[0;m" << std::endl;
		break;
	}
}