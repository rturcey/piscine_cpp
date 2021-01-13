/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:55 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:14:46 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	return;
}

Victim::Victim(void)
{
	std::cout << "YOU SHOULD NEVER SEE THAT!" << std::endl;
	return;
}


Victim::Victim(const Victim &src)
{
	*this = src;
	return;
}

std::string		Victim::getName(void) const
{
	return (this->name);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

Victim		&Victim::operator=(const Victim &rhs)
{
	this->name = rhs.getName();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}

Victim::~Victim(void)
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
	return;
}
