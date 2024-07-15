/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:41:41 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy) {

	std::cout << "Copy constructor called" << std::endl;
	value = cpy.value;
}
Fixed &Fixed::operator=(const Fixed &to_asign) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &to_asign)
		this->value = to_asign.value;
	return (*this);
}
Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}
// parametric constructors
Fixed::Fixed(const int n) {

	std::cout << "Int constructor called" << std::endl;
	value = n << fractional_bits;
}

Fixed::Fixed(const float d) {

	std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(d * (1 << fractional_bits));
}
// insertion operator overload
std::ostream& operator<<(std::ostream&oso, const Fixed& fx) {

	oso << fx.toFloat();
	return (oso);
}
// comparision operators overloads 
bool Fixed::operator>(const Fixed &fx) {

	if (this->value > fx.value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &fx) {

	if (this->value < fx.value)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &fx) {

	if (this->value >= fx.value)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &fx) {

	if (this->value <= fx.value)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &fx) {

	if (this->value == fx.value)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &fx) {

	if (this->value != fx.value)
		return (true);
	return (false);
}
//arithmetic operators overload (+, -, *, /)

Fixed Fixed::operator+(const Fixed &b) {

	return (Fixed(this->toFloat() + b.toFloat()));
}
Fixed Fixed::operator-(const Fixed &b) {

	return (Fixed(this->toInt() - b.toInt()));
}
Fixed Fixed::operator*(const Fixed &b) {

	return (Fixed(this->toFloat() * b.toFloat()));
}
Fixed Fixed::operator/(const Fixed &b) {

	return (Fixed(this->toFloat() / b.toFloat()));
}
// increment and decrement operators overload	
Fixed Fixed::operator++(int) {
 // a = 5; b = a++; b will be 5 and a will be 6
	Fixed	incr(*this); // original's one copy	
	this->value++; // increment of the original value
	return (incr); // copy returned
}
Fixed Fixed::operator--(int) {

	Fixed	decr(*this);
	this->value--;
	return (decr);
}

Fixed &Fixed::operator++(void) {

	this->value++;
	return (*this);
}

Fixed &Fixed::operator--(void) {

	this->value--;
	return (*this);
}
	
//required member functions
float Fixed::toFloat(void) const {

	float conv;

	conv = static_cast<float>(this->value) / (1 << this->fractional_bits);
	return (conv);
}

int Fixed::toInt(void) const {

	int	conv;
	conv = this->value >> this->fractional_bits;
	return (conv);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {

	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(Fixed const &a, const Fixed &b) {

	if (a.value < b.value)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {

	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(Fixed const &a, const Fixed &b) {

	if (a.value > b.value)
		return (a);
	return (b);
}

