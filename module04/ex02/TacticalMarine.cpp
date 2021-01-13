/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:33:19 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 11:44:55 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
	*this = src;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

ISpaceMarine		*TacticalMarine::clone(void) const
{
	ISpaceMarine	*cloned = new TacticalMarine(*this);
	return (cloned);
}

void				TacticalMarine::battleCry(void) const
{
	std::cout <<  "For the holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine		&TacticalMarine::operator=(const TacticalMarine &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, TacticalMarine const &rhs)
{
	(void)rhs;
	o << "Hi, I'm a Tactical Marine" << std::endl;
	return (o);
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}
