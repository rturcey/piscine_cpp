/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 08:31:22 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 11:01:31 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	this->stock = new AMateria*[4];
	for (int i = 0 ; i < 4 ; i++)
		this->stock[i] = NULL;
	return;
}

Character::Character(const Character &src)
{
	this->_name = src.getName();
	AMateria	**copy = new AMateria*[4];
	for (int i = 0 ; i < 4 ; i++)
		copy[i] = src.stock[i]->clone();
	this->stock = copy;
	return ;
}

std::string			Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0 ; i < 4 ; i++)
		if (!stock[i])
		{
			stock[i] = m;
			break;
		}
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index." << std::endl;
	else
		this->stock[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index." << std::endl;
	else if (this->stock[idx])
		this->stock[idx]->use(target);
}

unsigned int		Character::printXP(int idx) const
{
	if (idx < 0 || idx > 3)
		return (0);
	else
		return (this->stock[idx]->getXP());
}

Character			&Character::operator=(const Character &rhs)
{
	for (int i = 0 ; i < 4 ; i++)
		delete this->stock[i];
	delete[] this->stock;
	this->_name = rhs.getName();
	AMateria	**copy = new AMateria*[4];
	for (int i = 0 ; i < 4 ; i++)
		copy[i] = rhs.stock[i]->clone();
	this->stock = copy;
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Character const &rhs)
{
	o << "Hi, my name is " << rhs.getName() << "!" << std::endl;
	return (o);
}

Character::~Character(void)
{
	for (int i = 0 ; i < 4 ; i++)
		delete this->stock[i];
	delete[] this->stock;
	return;
}
