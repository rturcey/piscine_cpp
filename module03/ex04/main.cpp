/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:18:05 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:08:32 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void	frag_fight(std::string name)
{
	SuperTrap		enemy("Enemy");
	FragTrap		yours(name);
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

void	scav_fight(std::string name)
{
	SuperTrap		enemy("Enemy");
	ScavTrap		yours(name);
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

void	ninja_fight(std::string name)
{
	SuperTrap		enemy("Enemy");
	NinjaTrap		yours(name);
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

void	super_fight(std::string name)
{
	SuperTrap		enemy("Enemy");
	SuperTrap		yours(name);
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
	std::string		index;

	std::cout << "Hi there! You'll fight against a SUP3R-TP. Would you like to play with a ... 1 FR4G-TP / 2 SC4V-TP / 3 NINJ4-TP / 4 SUP3R-TP? ";
	while (42)
	{
		std::getline(std::cin, index);
		if (!(isdigit(index[0])) || index[1] || index[0] - 48 < 1 || index[0] - 48 > 4)
			std::cerr << "/!\\ Please type a valid number : ";
		else
		{
			std::cout << "What's its name ? ";
			std::getline(std::cin, name);
			if (index[0] - 48 == 1)
				frag_fight(name);
			else if (index[1] - 48 == 2)
				scav_fight(name);
			else if (index[1] - 48 == 3)
				ninja_fight(name);
			else
				super_fight(name);
			break;
		}

	}
	return (0);
}
