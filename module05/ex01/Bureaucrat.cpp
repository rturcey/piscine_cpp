/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 09:08:47 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/09 12:18:00 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	return;
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void				Bureaucrat::gradeUp(void)
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		_grade -= 1;
}

void				Bureaucrat::gradeDown(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += 1;
}

void				Bureaucrat::beSigned(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " cannot sign " << form.getName() << " because: " << e.what() << std::endl;
		return ;
	}
	std::cerr << this->_name << " signs " << form.getName() << std::endl;
}

void				Bureaucrat::beExecuted(Form &form)
{
	try
	{
		form.beExecuted(*this);
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " cannot execute " << form.getName() << " because: " << e.what() << std::endl;
		return ;
	}
	std::cerr << this->_name << " executes " << form.getName() << std::endl;
}

Bureaucrat			&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}
