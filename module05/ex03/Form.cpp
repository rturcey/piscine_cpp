/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 11:33:34 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 17:03:55 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, unsigned int const &grade, unsigned int const &exec) : _name(name), _grade(grade), _exec(exec)
{
	_signed = 0;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	if (exec > 150)
		throw GradeTooLowException();
	else if (exec < 1)
		throw GradeTooHighException();
	return;
}

Form::Form(void) : _name("default"), _grade(150), _exec(150)
{
	return ;
}

Form::Form(const Form &src) : _name(src.getName()), _grade(src.getGrade()), _exec(src.getExec())
{
	return;
}

std::string const	Form::getName(void) const
{
	return (this->_name);
}

unsigned int		Form::getGrade(void) const
{
	return (this->_grade);
}

unsigned int		Form::getExec(void) const
{
	return (this->_exec);
}

Form			&Form::operator=(const Form &rhs)
{
	(void)rhs;
	return (*this);
}

bool			Form::isSigned(void) const
{
	if (this->_signed)
		return (1);
	return (0);
}

void			Form::beSigned(Bureaucrat bc)
{
	if (this->isSigned())
		std::cerr << "Form already signed." << std::endl;
	else if (bc.getGrade() <= this->getGrade())
		this->_signed = 1;
	else
		throw Form::GradeTooLowException();

}

void			Form::beExecuted(Bureaucrat bc) const
{
	if (!this->isSigned())
		throw Form::UnsignedException();
	else if (bc.getGrade() > this->getExec())
		throw Form::GradeTooLowException();
}

std::ostream		&operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << " form, " << (rhs.isSigned() ? "signed" : "unsigned");
	o << ", is grade " << rhs.getGrade() << " and can be executed by a bureaucrat grade " << rhs.getExec();
	return (o);
}

Form::~Form(void)
{
	return;
}
