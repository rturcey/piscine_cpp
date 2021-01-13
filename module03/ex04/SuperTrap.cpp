/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 13:17:21 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:07:31 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string str)
{
	name = str;
	lvl = 1;
	type = "SUP3R";
	std::cout << "CONSTRUCTOR CALLED :: [" << str << "] YUUUUUUUUUUUUUUUUUUURGH!" << std::endl;
	return;
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
	*this = src;
	std::cout << "CONSTRUCTOR CALLED :: [" << this->getName() << "] GRUYYYYYYYYK!" << std::endl;
	return;
}

SuperTrap		&SuperTrap::operator=(const SuperTrap &rhs)
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
	std::cout << "ASSIGNATION OPERATOR :: Hey everybody! Yuiiiiiiiiiirg! I've become a true " << this->getName() << std::endl;
	return (*this);
}

void			SuperTrap::attack(ScavTrap &enemy)
{
	int				rd_atk = rand() % 4;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else if (rd_atk == 2)
		this->ninjaShoebox(enemy);
	else
		enemy.takeDamage(this->vaulthunter_dot_exe(enemy.getName()));
}

void			SuperTrap::attack(NinjaTrap &enemy)
{
	int				rd_atk = rand() % 4;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else if (rd_atk == 2)
		this->ninjaShoebox(enemy);
	else
		enemy.takeDamage(this->vaulthunter_dot_exe(enemy.getName()));
}

void			SuperTrap::attack(FragTrap &enemy)
{
	int				rd_atk = rand() % 4;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else if (rd_atk == 2)
		this->ninjaShoebox(enemy);
	else
		enemy.takeDamage(this->vaulthunter_dot_exe(enemy.getName()));
}

void			SuperTrap::attack(SuperTrap &enemy)
{
	int				rd_atk = rand() % 4;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else if (rd_atk == 2)
		this->ninjaShoebox(enemy);
	else
		enemy.takeDamage(this->vaulthunter_dot_exe(enemy.getName()));
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "DESTRUCTOR CALLED :: Yourghhhhhhhhhhhhhh!" << std::endl;
	return;
}
