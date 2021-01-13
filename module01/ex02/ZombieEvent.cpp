/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:17:00 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/21 10:12:32 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent(void)
{
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	return;
}

std::string	ZombieEvent::get_type(void)
{
	return (this->type);
}

void		ZombieEvent::setZombieType(void)
{
	this->type = "heap";
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie		*zomb = new Zombie;

	this->setZombieType();
	zomb->event(this->get_type(), name);
	return (zomb);
}

Zombie		*ZombieEvent::randomChump(void)
{
	std::string		name;
	char			c;
	int				i;

	i = -1;
	while (++i < 10)
	{
		do
			c = rand() % 'z';
		while(!('a' <= c && c <='z'));
		name += c;
		if (i == 0)
			name[i] -= 32;
	}
	return (newZombie(name));
}
