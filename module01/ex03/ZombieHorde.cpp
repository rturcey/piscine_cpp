/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:17:00 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/21 10:48:59 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(void)
{
	return;
}

ZombieHorde::ZombieHorde(int n)
{
	ZombieHorde::horde = new Zombie[n];
	for (int i = 0 ; i < n ; i++)
	{
		ZombieHorde::horde[i].event ("heap", this->randomChump());
	}
	ZombieHorde::nb = n;
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] ZombieHorde::horde;
	return;
}

int			ZombieHorde::get_n(void)
{
	return (ZombieHorde::nb);
}

std::string	ZombieHorde::randomChump(void)
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
	return (name);
}

void		ZombieHorde::announce(void)
{
	int		n;

	n = ZombieHorde::get_n();
	for (int i = 0 ; i < n ; i++)
		ZombieHorde::horde[i].announce();
}

int			ZombieHorde::nb = 0;
