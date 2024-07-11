/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:32:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:21:25 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>

class	Fixed {
private:
	int	value;
	static const int fractional_bits = 8;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float d);
	Fixed(const Fixed &f);
	Fixed& operator=(const Fixed &f);
	~Fixed();
	float toFloat(void) const;
	int toInt(void) const;
};
// insertion operator overload
std::ostream& operator<<(std::ostream&oso, const Fixed& fx); //output stream object(oso)