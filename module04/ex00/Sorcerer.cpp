/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:50 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:16:00 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(void)
{
	std::cout << "YOU SHOULD NEVER SEE THAT!" << std::endl;
	return;
}


Sorcerer::Sorcerer(const Sorcerer &src)
{
	*this = src;
	return;
}

std::string		Sorcerer::getName(void) const
{
	return (this->name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->title);
}

void			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &rhs)
{
	this->name = rhs.getName();
	this->title = rhs.getTitle();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}

Sorcerer::~Sorcerer(void)
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}
