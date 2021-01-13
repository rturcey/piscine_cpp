/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 09:12:17 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 11:01:59 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->stock = new AMateria*[4];
	for (int i = 0 ; i < 4 ; i++)
		this->stock[i] = NULL;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	AMateria	**copy = new AMateria*[4];
	for (int i = 0 ; i < 4 ; i++)
		copy[i] = src.getMateria(i)->clone();
	this->stock = copy;
	return ;
}

AMateria			*MateriaSource::getMateria(int i) const
{
	return (this->stock[i]);
}

void				MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0 ; i < 4 ; i++)
		if (!stock[i])
		{
			stock[i] = m;
			break;
		}
}

AMateria*			MateriaSource::createMateria(std::string const & type)
{
	if (!(type == "cure" || type == "ice"))
		return (0);
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->stock[i] && this->stock[i]->getType() == type)
			return (this->stock[i]->clone());
	}
	return (0);
}

MateriaSource		&MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0 ; i < 4 ; i++)
		delete this->stock[i];
	delete[] this->stock;
	AMateria	**copy = new AMateria*[4];
	for (int i = 0 ; i < 4 ; i++)
		copy[i] = rhs.getMateria(i)->clone();
	this->stock = copy;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, MateriaSource const &rhs)
{
	(void)rhs;
	o << "Hi there, I'm a Materia Source!" << std::endl;
	return (o);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0 ; i < 4 ; i++)
		delete this->stock[i];
	delete[] this->stock;
	return;
}
