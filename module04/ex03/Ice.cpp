/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 08:19:56 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 10:29:14 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return;
}

Ice::Ice(const Ice &src)
{
	*this = src;
	return;
}

AMateria*	Ice::clone(void) const
{
	AMateria	*cloned = new Ice;

	*cloned = *this;
	return (cloned);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->_xp += 10;
}

Ice		&Ice::operator=(const Ice &rhs)
{
	this->_xp = rhs.getXP();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Ice const &rhs)
{
	o << "I'm an Ice Materia, and I have got " << rhs.getXP() << " XP!" << std::endl;
	return (o);
}

Ice::~Ice(void)
{
	return;
}
