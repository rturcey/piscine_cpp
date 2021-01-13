/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:01:23 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 08:36:08 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"

Warrior::Warrior(void) : Enemy(120, "Warrior")
{
	std::cout << "OUGAH BOUGAH" << std::endl;
	return;
}

Warrior::Warrior(const Warrior &src)
{
	*this = src;
	return;
}

Warrior		&Warrior::operator=(const Warrior &rhs)
{
	(void)rhs;
	return (*this);
}

void			Warrior::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	if (this->hp + 2 < dmg)
		this->hp = 0;
	else
		this->hp -= (dmg - 2);
}

std::ostream	&operator<<(std::ostream &o, Warrior const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

Warrior::~Warrior(void)
{
	std::cout << "Glooooorggggg..." << std::endl;
	return;
}
