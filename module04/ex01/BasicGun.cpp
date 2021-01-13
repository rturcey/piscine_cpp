/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BasicGun.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 08:36:56 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 08:37:29 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BasicGun.hpp"

BasicGun::BasicGun(void)
{
	name = "Basic Gun";
	damage = 15;
	apcost = 3;
	return;
}

BasicGun::BasicGun(const BasicGun &src)
{
	*this = src;
	return;
}

BasicGun		&BasicGun::operator=(const BasicGun &rhs)
{
	(void)rhs;
	return (*this);
}

void			BasicGun::attack(void) const
{
	std::cout << "* PAN *" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, BasicGun const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

BasicGun::~BasicGun(void)
{
	return;
}
