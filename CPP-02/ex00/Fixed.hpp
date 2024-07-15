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

class	Fixed {
private:
	int	value; // fixed point value
	static const int fractional_bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &f);
	Fixed& operator=(const Fixed &f);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};