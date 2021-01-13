/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 08:11:56 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 10:29:17 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(const Cure &src)
{
	*this = src;
	return;
}

AMateria*	Cure::clone(void) const
{
	AMateria	*cloned = new Cure;

	*cloned = *this;
	return (cloned);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	this->_xp += 10;
}

Cure		&Cure::operator=(const Cure &rhs)
{
	this->_xp = rhs.getXP();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Cure const &rhs)
{
	o << "I'm a Cure Materia, and I have got " << rhs.getXP() << " XP!" << std::endl;
	return (o);
}

Cure::~Cure(void)
{
	return;
}
