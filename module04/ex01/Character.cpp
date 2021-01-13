/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:04:56 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 09:42:36 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
	return;
}

Character::Character(const Character &src)
{
	*this = src;
	return;
}

Character		&Character::operator=(const Character &rhs)
{
	this->name = rhs.getName();
	this->ap = rhs.getAP();
	this->weapon = rhs.getWeapon();
	return (*this);
}

void			Character::recoverAP(void)
{
	if (this->ap > 30)
		this->ap = 40;
	else
		this->ap += 10;
	std::cout << this->name << "'s AP have been recovered. They're now " << this->ap << "/40" << std::endl;
}

void			Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void			Character::attack(Enemy * &enemy)
{
	if (!enemy)
	{
		std::cout << "Enemy already dead... Don't be so cruel!" << std::endl;
		return ;
	}
	if (!this->weapon)
	{
		std::cout << "Well, sorry, but your'e unarmed." << std::cout;
		return ;
	}
	if (this->ap < this->weapon->getAPCost())
	{
		std::cout << "NOT ENOUGH AP" << std::endl;
		return ;
	}
	this->ap -= this->weapon->getAPCost();
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	enemy->takeDamage(this->weapon->getDamage());
	this->weapon->attack();
	if (enemy->getHP() == 0)
	{
		std::cout << "HEEEEEEERE" << std::endl;
		delete enemy;
		enemy = NULL;
	}
}

std::string		Character::getName(void) const
{
	return (this->name);
}

int				Character::getAP(void) const
{
	return (this->ap);
}

AWeapon			*Character::getWeapon(void) const
{
	return (this->weapon);
}

bool			Character::isArmed(void) const
{
	if (this->weapon)
		return (1);
	else
		return (0);
}

std::ostream	&operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.isArmed())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}

Character::~Character(void)
{
	return;
}
