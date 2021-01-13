/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:02:25 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 18:06:31 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(const Intern &src)
{
	*this = src;
	return;
}

Form					*Intern::presidentialNew(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form					*Intern::robotomyNew(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form					*Intern::shruberryNew(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form					*Intern::makeForm(std::string const &name, std::string const &target)
{
	for (int i = 0 ; i < 3 ; i++)
	{
		if (!name.compare(this->_knownsForms[i]))
			return (this->*_methods[i])(target);
	}
	throw Intern::UnknownException();
}

Intern::Intern(void)
{
	this->_knownsForms[0] = "presidential pardon";
	this->_knownsForms[1] = "robotomy request";
	this->_knownsForms[2] = "shruberry creation";
	this->_methods[0] = &Intern::presidentialNew;
	this->_methods[1] = &Intern::robotomyNew;
	this->_methods[2] = &Intern::shruberryNew;
	return;
}

Intern					&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream			&operator<<(std::ostream &o, Intern const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

Intern::~Intern(void)
{
	return;
}
