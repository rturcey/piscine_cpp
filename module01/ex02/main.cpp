/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:22:56 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/19 12:54:51 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>

int		main(void)
{
	srand(time(NULL));
	Zombie		zomb1;
	Zombie		*zomb2;
	Zombie		*zomb3;
	ZombieEvent	event1;
	ZombieEvent	event2;

	zomb1.init();
	zomb1.announce();
	zomb2 = event1.newZombie("Dylorgh");
	zomb2->announce();
	zomb3 = event1.randomChump();
	zomb3->announce();
	delete(zomb2);
	delete(zomb3);
	return (0);
}
