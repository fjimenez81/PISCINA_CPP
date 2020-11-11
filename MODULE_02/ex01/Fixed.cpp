/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:04:51 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/11 09:55:14 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void)
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed (int const val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = val << _fractional;
}

Fixed::Fixed (float const val)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(val * (1 << _fractional));
}

Fixed::Fixed (const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void			Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

int				Fixed::toInt(void) const
{
	return (_value >> _fractional);
}

float			Fixed::toFloat(void) const
{
	return ((float)_value / ( 1 << _fractional));
}

Fixed &			Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignment operator called" << std::endl;
	_value = src._value;
	return (*this);
}

std::ostream &	operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return (os);
}
