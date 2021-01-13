/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 10:04:45 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:33:15 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return;
}

ScavTrap::ScavTrap(std::string str)
{
	name = str;
	hit = 100;
	hit_max = 100;
	energy = 50;
	energy_max = 50;
	lvl = 1;
	melee = 20;
	ranged = 15;
	armor = 3;
	type = "SC4V";
	std::cout << "CONSTRUCTOR CALLED :: [" << str << "] You can't just program this level of excitement!" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "CONSTRUCTOR CALLED :: [" << this->getName() << "] Things are about to get awesome!" << std::endl;
	return;
}

void			ScavTrap::challengeNewcomer(void)
{
	std::string		challenges[] = {
					"listen to Nicolas Sadirac 30 seconds without throwing up!",
					"read the whole In Search of Lost Time without yawning!",
					"watch the whole Lost without a perplexed expression on its face!",
					"pretend it loves animals while eating a steak!",
					"cure COVID-19 with vitamin D or hydrochloroquine!"};
	unsigned int	no = rand() % 5;
	unsigned int	success = rand() % 2;

	std::cout << "SC4V-TP " << this->getName() << " wants to challenge itself ! Let's see it try to " << challenges[no] << std::endl;
	if (success)
	{
		std::cout << "Well, it was a fucking success! Congratulations! " << std::endl;
		this->beRepaired(25);
		this->energyUp(25);
	}
	else
	{
		std::cout << "Well, it was a fucking failure! Booooo! " << "SC4V-TP " << this->getName() << " lost 15 energy." << std::endl;
		this->energy = this->energy >= 15 ? this->energy - 15 : 0;
		std::cout << "SC4V-TP " << this->getName() << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	}
}

void			ScavTrap::attack(ClapTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		this->challengeNewcomer();
}

ScavTrap		&ScavTrap::operator=(const ScavTrap &rhs)
{
	this->name = rhs.name;
	this->hit = rhs.hit;
	this->hit_max = rhs.hit_max;
	this->energy = rhs.energy;
	this->energy_max = rhs.energy_max;
	this->lvl = rhs.lvl;
	this->melee = rhs.melee;
	this->ranged = rhs.ranged;
	this->armor = rhs.armor;
	this->type = rhs.type;
	std::cout << "ASSIGNATION OPERATOR :: Hey everybody! Loading combat packages! I've become a true " << this->name << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "DESTRUCTOR CALLED :: No, nononono NO!" << std::endl;
	return;
}
