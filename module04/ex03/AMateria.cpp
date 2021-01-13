/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 07:55:44 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 10:32:55 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	return;
}

AMateria::AMateria(void)
{
	return;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
	return;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int		AMateria::getXP(void) const
{
	return (this->_xp);
}

AMateria			&AMateria::operator=(const AMateria &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, AMateria const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

AMateria::~AMateria(void)
{
	return;
}
