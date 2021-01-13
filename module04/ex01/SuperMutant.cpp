/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:59:33 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:35:05 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
	*this = src;
	return;
}

SuperMutant		&SuperMutant::operator=(const SuperMutant &rhs)
{
	(void)rhs;
	return (*this);
}

void			SuperMutant::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	if (this->hp + 3 < dmg)
		this->hp = 0;
	else
		this->hp -= (dmg - 3);
}

std::ostream	&operator<<(std::ostream &o, SuperMutant const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}
