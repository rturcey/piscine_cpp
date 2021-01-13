/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:01:23 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:37:56 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(const RadScorpion &src)
{
	*this = src;
	return;
}

RadScorpion		&RadScorpion::operator=(const RadScorpion &rhs)
{
	(void)rhs;
	return (*this);
}

void			RadScorpion::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	if (this->hp < dmg)
		this->hp = 0;
	else
		this->hp -= dmg;
}

std::ostream	&operator<<(std::ostream &o, RadScorpion const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}
