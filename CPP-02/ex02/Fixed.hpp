/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:32:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/31 15:48:09 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>
#include <stdbool.h>

class	Fixed {
	private:
		int	value;
		static const int fractional_bits = 8;
	public:
	//OCT
		Fixed();
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed &f);
		~Fixed();
	//Constructores personalizados
		Fixed(const int n);
		Fixed(const float d);
	//overload de los operadores de comparación >, <, >=, <=, == , !=
		bool operator>(const Fixed &fx);
		bool operator<(const Fixed &fx);
		bool operator>=(const Fixed &fx);
		bool operator<=(const Fixed &fx);
		bool operator==(const Fixed &fx);
		bool operator!=(const Fixed &fx);
	//overload de los operadores aritméticos +, -, *, /
		Fixed operator+(const Fixed &b);
		Fixed operator-(const Fixed &b);
		Fixed operator*(const Fixed &b);
		Fixed operator/(const Fixed &b);
	//overload de los operadores de incremento y decremento
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed &operator++(void);
		Fixed &operator--(void);
	//funciones miembro requeridas
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

/* 	static Fixed &min(Fixed &first, Fixed &sec);
	static Fixed &max(Fixed &first, Fixed &sec);

	static const Fixed	&max(const Fixed &first, const Fixed &sec);
	static const Fixed	&min(const Fixed &first, const Fixed &sec); */

};
//overload del operador <<
std::ostream& operator<<(std::ostream&oso, const Fixed& fx); //output stream object(oso)