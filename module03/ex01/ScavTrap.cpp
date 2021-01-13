/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 10:04:45 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:30:29 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return;
}

ScavTrap::ScavTrap(std::string str) : name(str), hit(100), hit_max(100), energy(50), energy_max(50),
lvl(1), melee(20), ranged(15), armor(3)
{
	std::cout << "CONSTRUCTOR CALLED :: [" << str << "] You can't just program this level of excitement!" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "CONSTRUCTOR CALLED :: [" << this->name << "] Things are about to get awesome!" << std::endl;
	return;
}

unsigned int	ScavTrap::rangedAttack(std::string const &target)
{
	if (this->energy < 10)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at range,"
	<< " causing " << this->ranged << " points of damage!" << std::endl;
	this->energy -= 10;
	std::cout << "SC4V-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (this->ranged);
}

unsigned int	ScavTrap::meleeAttack(std::string const &target)
{
	if (this->energy < 15)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at melee,"
	<< " causing " << this->melee << " points of damage!" << std::endl;
	this->energy -= 15;
	std::cout << "SC4V-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (this->melee);
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

	std::cout << "SC4V-TP " << this->name << " wants to challenge itself ! Let's see it try to " << challenges[no] << std::endl;
	if (success)
		std::cout << "Well, it was a fucking success! Congratulations! " << "SC4V-TP " << this->name << " earned... Nothing." << std::endl;
	else
		std::cout << "Well, it was a fucking failure! Booooo! " << "SC4V-TP " << this->name << " lost... Nothing." << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hit)
		this->hit = 0;
	else
		this->hit -= amount;
	std::cout << "SC4V-TP " << this->name << " is now " << this->hit << "/" << this->hit_max << " HP." << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	total;

	total = this->hit + amount;
	this->hit = (total > this->hit_max) ? this->hit_max : total;
	std::cout << "SC4V-TP " << this->name << " has been repaired, and is now " << this->hit << "/" << this->hit_max << " HP." << std::endl;
}

void			ScavTrap::energyUp(unsigned int amount)
{
	unsigned int	total;

	total = this->energy + amount;
	this->energy = (total > this->energy_max) ? this->energy_max : total;
	std::cout << "SC4V-TP " << this->name << " has been repaired, and is now " << this->energy << "/" << this->energy_max << " energy" << std::endl;
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
	std::cout << "ASSIGNATION OPERATOR :: Hey everybody! Loading combat packages! I've become a true " << this->name << std::endl;
	return (*this);
}

bool			ScavTrap::isAlive(void)
{
	if (this->hit > 0)
		return (1);
	return (0);
}

void			ScavTrap::attack(FragTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		this->challengeNewcomer();
}

void			ScavTrap::repair(void)
{
	unsigned int	amount = rand() % 51;
	std::string		index;

	std::cout << "REPAIR :: 1. HP / 2. Energy : ";
	while (42)
	{
		std::getline(std::cin, index);
		if (!(isdigit(index[0])) || index[1] || index[0] - 48 < 1 || index[0] - 48 > 2)
			std::cerr << "/!\\ Please type a valid number : ";
		else
		{
			if (index[0] == 1)
				this->beRepaired(amount);
			else
				this->energyUp(amount);
		}
	}
}

std::string		ScavTrap::getName(void)
{
	return (this->name);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "DESTRUCTOR CALLED :: No, nononono NO!" << std::endl;
	return;
}
