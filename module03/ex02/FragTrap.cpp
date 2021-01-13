/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:54:36 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:31:38 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return;
}

FragTrap::FragTrap(std::string str)
{
	name = str;
	hit = 100;
	hit_max = 100;
	energy = 100;
	energy_max = 100;
	lvl = 1;
	melee = 30;
	ranged = 20;
	armor = 5;
	type = "FR4G";
	std::cout << "CONSTRUCTOR CALLED :: [" << str << "] This time it'll be awesome, I promise!" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << "CONSTRUCTOR CALLED :: [" << this->getName() << "] Recompiling my combat code!" << std::endl;
	return;
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
		std::cout << this->getName() << "'s energy is too low." << std::endl;
		return (0);
	}
	std::cout << "It's happening... it's happening! It's about to get magical!" << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " with " << attacks[no];
	std::cout << ", causing " << dmg[no] << " points of damage !" << std::endl;
	this->energy -= 25;
	std::cout << "FR4G-TP " << this->getName() << "'s energy is now " << this->energy << "/" << this->energy_max << std::endl;
	return (dmg[no]);
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
	this->type = rhs.type;
	std::cout << "ASSIGNATION OPERATOR :: Hey everybody! Check out my new package! I've become a true " << this->getName() << std::endl;
	return (*this);
}

void			FragTrap::attack(ClapTrap &enemy)
{
	int				rd_atk = rand() % 3;

	if (rd_atk == 0)
		enemy.takeDamage(this->meleeAttack(enemy.getName()));
	else if (rd_atk == 1)
		enemy.takeDamage(this->rangedAttack(enemy.getName()));
	else
		enemy.takeDamage(this->vaulthunter_dot_exe(enemy.getName()));
}

FragTrap::~FragTrap(void)
{
	std::cout << "DESTRUCTOR CALLED :: Yo daddy's so dumb, he couldn't think of a good ending for this 'yo daddy' joke!" << std::endl;
	return;
}
