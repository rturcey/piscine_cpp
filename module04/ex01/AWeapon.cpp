/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:39:49 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:22:22 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
	return;
}

AWeapon::AWeapon(const AWeapon &src)
{
	*this = src;
	return;
}

AWeapon			&AWeapon::operator=(const AWeapon &rhs)
{
	this->name = rhs.getName();
	this->damage = rhs.getDamage();
	this->apcost = rhs.getAPCost();
	return (*this);
}

std::string		AWeapon::getName(void) const
{
	return (this->name);
}

int				AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int				AWeapon::getDamage(void) const
{
	return (this->damage);
}

std::ostream	&operator<<(std::ostream &o, AWeapon const &rhs)
{
	o << rhs.getName() << " makes " << rhs.getDamage() << " for " << rhs.getAPCost() << " AP" << std::endl;
	return (o);
}

AWeapon::~AWeapon(void)
{
	return;
}
