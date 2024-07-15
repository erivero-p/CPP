/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:32:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:37 by erivero-         ###   ########.fr       */
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
	Fixed(void);
	Fixed(const Fixed &f);
	Fixed& operator=(const Fixed &f);
	~Fixed(void);
// parametric constructors
	Fixed(const int n);
	Fixed(const float d);
// comparision operators overloads  (>, <, >=, <=, == , !=)
	bool operator>(const Fixed &fx);
	bool operator<(const Fixed &fx);
	bool operator>=(const Fixed &fx);
	bool operator<=(const Fixed &fx);
	bool operator==(const Fixed &fx);
	bool operator!=(const Fixed &fx);
//arithmetic operators overload (+, -, *, /)
	Fixed operator+(const Fixed &b);
	Fixed operator-(const Fixed &b);
	Fixed operator*(const Fixed &b);
	Fixed operator/(const Fixed &b);
// increment and decrement operators overload
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator++(void);
	Fixed &operator--(void);
//required member functions
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};
// insertion operator overload
std::ostream& operator<<(std::ostream&oso, const Fixed& fx); //output stream object(oso)