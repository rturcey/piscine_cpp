/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:50:22 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/13 10:10:55 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->count = 0;
	this->marines = new ISpaceMarine*[1];
	return;
}

Squad::Squad(const Squad &src)
{
	this->count = src.getCount();
	if (this->count > 0)
	{
		ISpaceMarine	**maj = new ISpaceMarine*[this->count];
		for (int i = 0 ; i < this->count ; i++)
			maj[i] = src.getUnit(i)->clone();
		this->marines = maj;
	}
	return ;
}

int				Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine*	Squad::getUnit(int unit) const
{
	if (unit < 0 || unit > this->count + 1)
	{
		std::cout << "/!\\ (int unit) should be between 0 and " << this->count << std::endl;
		return (NULL);
	}
	return (this->marines[unit]);
}

int				Squad::push(ISpaceMarine *marine)
{
	if (!(marine))
	{
		std::cout << "/!\\ Your Space Marine shouldn't be NULL!" << std::endl;
		return (this->count);
	}
	for (int i = 0 ; i < this->count ; i++)
	{
		if (this->marines[i] == marine)
		{
			std::cout << "/!\\ Your Space Marine is already in the squad!" << std::endl;
			return (this->count);
		}
	}
	this->count++;
	ISpaceMarine	**maj = new ISpaceMarine*[this->count];
	for (int i = 0 ; i < this->count - 1 ; i++)
	{
		maj[i] = this->marines[i];
	}
	maj[this->count - 1] = marine;
	delete [] this->marines;
	this->marines = maj;
	return (this->count);
}

Squad			&Squad::operator=(const Squad &rhs)
{
	if (this->count > 0)
	{
		for (int i = 0 ; i < this->count ; i++)
			delete this->marines[i];
		delete[] this->marines;
	}
	this->count = rhs.getCount();
	if (this->count > 0)
	{
		ISpaceMarine	**maj = new ISpaceMarine*[this->count];
		for (int i = 0 ; i < this->count ; i++)
			maj[i] = rhs.getUnit(i)->clone();
		this->marines = maj;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Squad const &rhs)
{
	o << "This squad counts " << rhs.getCount() << " soldiers." << std::endl;
	return (o);
}

Squad::~Squad(void)
{
	if (this->count > 0)
	{
		for (int i = 0 ; i < this->count ; i++)
			delete this->marines[i];
		delete[] this->marines;
	}
	return;
}
