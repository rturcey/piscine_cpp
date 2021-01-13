/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:41 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:14:27 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog Zog." << std::endl;
	return;
}

Peon::Peon(void)
{
	std::cout << "YOU SHOULD NEVER SEE THAT!" << std::endl;
	return;
}

Peon::Peon(const Peon &src)
{
	*this = src;
	return;
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

Peon			&Peon::operator=(const Peon &rhs)
{
	this->name = rhs.getName();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Peon const &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}
