/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:54:36 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:29:34 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return;
}

FragTrap::FragTrap(std::string str) : name(str), hit(100), hit_max(100), energy(100), energy_max(100),
lvl(1), melee(30), ranged(20), armor(5)
{
	std::cout << "CONSTRUCTOR CALLED :: [" << str << "] This time it'll be awesome, I promise!" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << "CONSTRUCTOR CALLED :: [" << this->name << "] Recompiling my combat code!" << std::endl;
	return;
}

unsigned int	FragTrap::rangedAttack(std::string const &target)
{
	if (this->energy < 10)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range,"
	<< " causing " << this->ranged << " points of damage!" << std::endl;
	this->energy -= 10;
	std::cout << "FR4G-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (this->ranged);
}

unsigned int	FragTrap::meleeAttack(std::string const &target)
{
	if (this->energy < 15)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee,"
	<< " causing " << this->melee << " points of damage!" << std::endl;
	this->energy -= 15;
	std::cout << "FR4G-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (this->melee);
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string		attacks[] = {
					"Senseless Sacrifice",
					"Knock-knock jokes",
					"Integral reading of Joyce's Ulysses by a pedant teacher",
					"Ft_Services",
					"A 6 year old kid better than you at Fortnite"};
	unsigned int	dmg[] = {20, 42, 500, 1000, 6};
	unsigned int	no = rand() % 5;

	if (this->energy < 25)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << "It's happening... it's happening! It's about to get magical!" << std::endl;
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " with " << attacks[no];
	std::cout << ", causing " << dmg[no] << " points of damage !" << std::endl;
	this->energy -= 25;
	std::cout << "FR4G-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (dmg[no]);
}

void			FragTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hit)
		this->hit = 0;
	else
		this->hit -= amount;
	std::cout << "FR4G-TP " << this->name << " is now " << this->hit << "/" << this->hit_max << " HP." << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	total;

	total = this->hit + amount;
	this->hit = (total > this->hit_max) ? this->hit_max : total;
	std::cout << "FR4G-TP " << this->name << " has been repaired, and is now " << this->hit << "/" << this->hit_max << " HP." << std::endl;
}

void			FragTrap::energyUp(unsigned int amount)
{
	unsigned int	total;

	total = this->energy + amount;
	this->energy = (total > this->energy_max) ? this->energy_max : total;
	std::cout << "FR4G-TP " << this->name << " has been repaired, and is now " << this->energy << "/" << this->energy_max << " energy" << std::endl;
}

FragTrap		&FragTrap::operator=(const FragTrap &rhs)
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
	std::cout << "ASSIGNATION OPERATOR :: Hey everybody! Check out my new package! I've become a true " << this->name << std::endl;
	return (*this);
}

bool			FragTrap::isAlive(void)
{
	if (this->hit > 0)
		return (1);
	return (0);
}

void			FragTrap::attack(ScavTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		enemy.takeDamage(this->vaulthunter_dot_exe(enemy.getName()));
}

void			FragTrap::repair(void)
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
			if (index[0] - 48 == 1)
				this->beRepaired(amount);
			else
				this->energyUp(amount);
			break;
		}
	}
}

std::string		FragTrap::getName(void)
{
	return (this->name);
}

FragTrap::~FragTrap(void)
{
	std::cout << "DESTRUCTOR CALLED :: Yo daddy's so dumb, he couldn't think of a good ending for this 'yo daddy' joke!" << std::endl;
	return;
}
