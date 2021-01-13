/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:04:07 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:07:38 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	energy = 120;
	energy_max = 120;
	melee = 60;
	std::cout << "CONSTRUCTOR CALLED :: [DEFAULT_NINJA] Look out everybody! Things are about to get awesome!" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string str)
{
	name = str;
	hit = 60;
	hit_max = 60;
	energy = 120;
	energy_max = 120;
	lvl = 1;
	melee = 60;
	ranged = 5;
	armor = 0;
	type = "NINJ4";
	std::cout << "CONSTRUCTOR CALLED :: [" << str << "] Look out everybody! Things are about to get awesome!" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
	*this = src;
	std::cout << "CONSTRUCTOR CALLED :: [" << this->getName() << "] Glitching weirdness is a term of endearment, right?" << std::endl;
	return;
}

void			NinjaTrap::ninjaShoebox(FragTrap &enemy)
{
	unsigned int		dmg;

	dmg = 30 + rand() % 50;
	if (this->energy < 30)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return ;
	}
	std::cout << this->type << "-TP " << this->name << " attacks " << enemy.getName() << " with Rasengan"
	<< " causing " << dmg << " points of damage!" << std::endl;
	this->energy -= 30;
	std::cout << this->type << "-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	enemy.takeDamage(dmg);
}

void			NinjaTrap::ninjaShoebox(ScavTrap &enemy)
{
	unsigned int		dmg;

	dmg = this->hit_max - this->hit;
	if (this->energy < 30)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return ;
	}
	std::cout << this->type << "-TP " << this->name << " attacks " << enemy.getName() << " with Amaterasu"
	<< " causing " << dmg << " points of damage!" << std::endl;
	this->energy -= 30;
	std::cout << this->type << "-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	enemy.takeDamage(dmg);
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &enemy)
{
	unsigned int		dmg;

	dmg = rand() % 50 + rand() % 30 + rand() % 10;
	if (this->energy < 30)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return ;
	}
	std::cout << this->type << "-TP " << this->name << " attacks " << enemy.getName() << " with Hidden Lotus"
	<< " causing " << dmg << " points of damage!" << std::endl;
	this->energy -= 30;
	std::cout << this->type << "-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	enemy.takeDamage(dmg);
}

void			NinjaTrap::ninjaShoebox(SuperTrap &enemy)
{
	unsigned int		dmg;

	dmg = ((30 + rand() % 50) + (rand() % 50 + rand() % 30 + rand() % 10)) / 2;
	if (this->energy < 30)
	{
		std::cout << this->name << "'s energy is too low." << std::endl;
		return ;
	}
	std::cout << this->type << "-TP " << this->name << " attacks " << enemy.getName() << " with Hidden Rasengan"
	<< " causing " << dmg << " points of damage!" << std::endl;
	this->energy -= 30;
	std::cout << this->type << "-TP " << this->name << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	enemy.takeDamage(dmg);
}

NinjaTrap		&NinjaTrap::operator=(const NinjaTrap &rhs)
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
	std::cout << "ASSIGNATION OPERATOR :: Hey everybody! Let's get this party started! I've become a true " << this->getName() << std::endl;
	return (*this);
}

void			NinjaTrap::attack(NinjaTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		this->ninjaShoebox(enemy);
}

void			NinjaTrap::attack(FragTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		this->ninjaShoebox(enemy);
}

void			NinjaTrap::attack(ScavTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		this->ninjaShoebox(enemy);
}

void			NinjaTrap::attack(SuperTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		this->ninjaShoebox(enemy);
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "DESTRUCTOR CALLED :: Good thing I don't have a soul!" << std::endl;
	return;
}
