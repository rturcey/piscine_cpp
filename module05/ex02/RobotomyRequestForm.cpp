/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:05:14 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:58:56 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45), _target(target)
{
	srand(time(NULL));
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
	return;
}

void					RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
	std::cout << "*Drrrrrrrrrrrrrrrrrrrrrrrr...*" << std::endl;
	if (rand() % 2 == 1)
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomization failed!" << std::endl;

}

RobotomyRequestForm		&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}
