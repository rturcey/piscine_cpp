/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:48:56 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:45:05 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
{
	name = "Plasma Rifle";
	damage = 21;
	apcost = 5;
	return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
	*this = src;
	return;
}

PlasmaRifle		&PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	(void)rhs;
	return (*this);
}

void			PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, PlasmaRifle const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}
