/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:18:05 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/04 08:57:59 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	frag_fight(std::string name)
{
	FragTrap		yours(name);
	FragTrap		enemy("Enemy");
	int				to_do;
	std::string		index;

	while (yours.isAlive() && enemy.isAlive())
	{
		std::cout << "_______________________" << std::endl;
		std::cout << "1 Attack / 2 Repair : ";
		while (42)
		{
			std::getline(std::cin, index);
			if (!(isdigit(index[0])) || index[1] || index[0] - 48 < 1 || index[0] - 48 > 2)
				std::cerr << "/!\\ Please type a valid number : ";
			else
			{
				if (index[0] - 48 == 1)
					yours.attack(enemy);
				else
					yours.repair();
				break;
			}
		}
		if (!(yours.isAlive() && enemy.isAlive()))
			break;
		to_do = rand() % 3;
		if (to_do == 1)
		{
			if (rand() % 2 == 1)
				enemy.beRepaired(rand() % 50);
			else
				enemy.energyUp(rand() % 50);
		}
		else
			enemy.attack(yours);
	}
	std::cout << "_________________________" << std::endl;
	if (yours.isAlive())
		std::cout << "======= CONGRATS! =======" << std::endl;
	else
		std::cout << "== WOOPS... TRY AGAIN! ==" << std::endl;
}

int		main(void)
{
	srand (time(NULL));
	std::string		name;

	std::cout << "Hi there! What's your FR4G-TP's name ? ";
	std::getline(std::cin, name);
	frag_fight(name);
	return (0);
}
