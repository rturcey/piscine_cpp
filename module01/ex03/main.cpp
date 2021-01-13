/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:22:56 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/21 10:19:05 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <sstream>

int		main(void)
{
	srand(time(NULL));
	int			n;
	std::string	str;

	std::cout << "How many zombies would you like to create ? ";
	while (42)
	{
		std::getline(std::cin, str);
		std::istringstream(str) >> n;
		if (n < 1)
			std::cerr << "/!\\ Please type a positive integer : ";
		else
			break;
	}
	ZombieHorde		horde(n);
	horde.announce();
	return (0);
}
