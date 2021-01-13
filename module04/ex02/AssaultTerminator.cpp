/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:49:07 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 11:58:47 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
	return;
}

ISpaceMarine		*AssaultTerminator::clone(void) const
{
	ISpaceMarine	*cloned = new AssaultTerminator(*this);
	return (cloned);
}

void				AssaultTerminator::battleCry(void) const
{
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator		&AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AssaultTerminator const &rhs)
{
	(void)rhs;
	o << "Hi, I'm an Assault Terminator" << std::endl;
	return (o);
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back..." << std::endl;
	return;
}
