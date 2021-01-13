/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:56:18 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:38:49 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
	return;
}

Enemy::Enemy(const Enemy &src)
{
	*this = src;
	return;
}

Enemy		&Enemy::operator=(const Enemy &rhs)
{
	this->hp = rhs.getHP();
	this->type = rhs.getType();
	return (*this);
}

void		Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	if (this->hp < dmg)
		this->hp = 0;
	else
		this->hp -= dmg;
}

int			Enemy::getHP(void) const
{
	return (this->hp);
}

std::string	Enemy::getType(void) const
{
	return (this->type);
}

std::ostream	&operator<<(std::ostream &o, Enemy const &rhs)
{
	o << rhs.getType() << " has " << rhs.getHP() << " HP" << std::endl;
	return (o);
}

Enemy::~Enemy(void)
{
	return;
}
