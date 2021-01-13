/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:00:56 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/04 10:39:33 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "CONSTRUCTOR CALLED :: CL4P-TP INITIALISATION!" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "DESTRUCTOR CALLED :: CL4P-TP DESTRUCTION!" << std::endl;
	return;
}

unsigned int	ClapTrap::rangedAttack(std::string const &target)
{
	if (this->energy < 10)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << this->type << "-TP " << this->name << " attacks " << target << " at range,"
	<< " causing " << this->ranged << " points of damage!" << std::endl;
	this->energy -= 10;
	std::cout << this->type << "-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (this->ranged);
}

unsigned int	ClapTrap::meleeAttack(std::string const &target)
{
	if (this->energy < 15)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << this->type << "-TP " << this->name << " attacks " << target << " at melee,"
	<< " causing " << this->melee << " points of damage!" << std::endl;
	this->energy -= 15;
	std::cout << this->type << "-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (this->melee);
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hit)
		this->hit = 0;
	else
		this->hit -= amount;
	std::cout << this->type << "-TP " << this->name << " is now " << this->hit << "/" << this->hit_max << " HP." << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	total;

	total = this->hit + amount;
	this->hit = (total > this->hit_max) ? this->hit_max : total;
	std::cout << this->type << "-TP " << this->name << " has been repaired, and is now " << this->hit << "/" << this->hit_max << " HP." << std::endl;
}

void			ClapTrap::energyUp(unsigned int amount)
{
	unsigned int	total;

	total = this->energy + amount;
	this->energy = (total > this->energy_max) ? this->energy_max : total;
	std::cout << this->type << "-TP " << this->name << " has been repaired, and is now " << this->energy << "/" << this->energy_max << " energy" << std::endl;
}

bool			ClapTrap::isAlive(void)
{
	if (this->hit > 0)
		return (1);
	return (0);
}

void			ClapTrap::repair(void)
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

ClapTrap		&ClapTrap::operator=(const ClapTrap &rhs)
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
	std::cout << "ASSIGNATION OPERATOR :: Hey everybody! Finding my own path! I've become a true " << this->name << std::endl;
	return (*this);
}

std::string		ClapTrap::getName(void)
{
	return (this->name);
}
