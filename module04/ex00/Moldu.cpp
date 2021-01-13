/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moldu.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:41 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:24:53 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Moldu.hpp"

Moldu::Moldu(std::string name) : Victim(name)
{
	std::cout << "Daddy's gone mad, hasn't he?" << std::endl;
	return;
}

Moldu::Moldu(void)
{
	std::cout << "YOU SHOULD NEVER SEE THAT!" << std::endl;
	return;
}

Moldu::Moldu(const Moldu &src)
{
	*this = src;
	return;
}

void			Moldu::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a little pig!" << std::endl;
}

Moldu			&Moldu::operator=(const Moldu &rhs)
{
	this->name = rhs.getName();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Moldu const &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}

Moldu::~Moldu(void)
{
	std::cout << "Groin groin." << std::endl;
	return;
}
