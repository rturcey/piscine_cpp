/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 10:44:08 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/30 10:34:48 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		pow_2(const int fractional_bits)
{
	int		pow = 1;
	for (int i = 0 ; i < fractional_bits ; i++)
		pow *= 2;
	return (pow);
}

Fixed::Fixed(void) : raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int n) : raw_bits(n * pow_2(Fixed::fractional_bits))
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float f) : raw_bits(roundf(f * pow_2(Fixed::fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed 	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->raw_bits = rhs.raw_bits;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->raw_bits / pow_2(Fixed::fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->raw_bits / pow_2(Fixed::fractional_bits));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &nb)
{
	return (o << nb.toFloat());
}
