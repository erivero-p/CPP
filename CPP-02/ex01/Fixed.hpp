/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:32:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/30 16:13:43 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>

class	Fixed {
	private:
		int	value; // fixed point value
		static const int fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float d);
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed &f);
		~Fixed();
		// int getRawBits(void) const;
		// void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
//overload del operador <<
std::ostream& operator<<(std::ostream&oso, const Fixed& fx); //output stream object