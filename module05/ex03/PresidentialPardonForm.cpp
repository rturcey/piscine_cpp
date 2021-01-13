/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:59:44 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:58:42 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
	return;
}

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		this->beExecuted(executor);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}
