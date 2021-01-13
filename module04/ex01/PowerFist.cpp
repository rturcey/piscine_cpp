/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:48:49 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:45:11 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
{
	name = "Power Fist";
	damage = 50;
	apcost = 8;
	return;
}

PowerFist::PowerFist(const PowerFist &src)
{
	*this = src;
	return;
}

PowerFist		&PowerFist::operator=(const PowerFist &rhs)
{
	(void)rhs;
	return (*this);
}

void			PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, PowerFist const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

PowerFist::~PowerFist(void)
{
	return;
}
