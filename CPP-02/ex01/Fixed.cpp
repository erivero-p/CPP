/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:41:41 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/30 16:18:53 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) 
{
	std::cout << "Int constructor called" << std::endl;
	value = n << fractional_bits;
}
Fixed::Fixed(const float d) 
{
	std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(d * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) //verificamos que no estemos asignando el objeto a sí mismo
		this->value = other.value;
	return (*this);
}

std::ostream& operator<<(std::ostream&oso, const Fixed& fx)
{
	oso << fx.toFloat();
	return (oso);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
float Fixed::toFloat(void) const
{
	float conv;
	
	conv = static_cast<float>(this->value) / (1 << this->fractional_bits);
	//es lo mismo que dividir entre 2^fractuional_bits, que es
	//como se hace la conversión de punto fijo a punto flotante
	return (conv);
}

int Fixed::toInt(void) const
{
	int	conv;

	conv = this->value >> this->fractional_bits;
	return (conv);
}