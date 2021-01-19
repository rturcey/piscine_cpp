/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 08:27:08 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/19 08:08:49 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int		is_zero(std::string const &str)
{
	if (!str.compare("0") || !str.compare("0.0") || !str.compare("0.0f"))
		return (1);
	return (0);
}

Scalar::Scalar(std::string const &str) : _str(str), _lever(0), c(0), d(0)
{
	d = std::strtod(str.c_str(), NULL);
	if (is_zero(str))
		c = 0;
	else if (!d)
	{
		_lever = 1;
		if (str.length() == 1)
			c = str[0];
		else
			c = 0;
		return ;
	}
	else
		c = static_cast<char>(d);
	return ;
}

Scalar::Scalar(const Scalar &src)
{
	*this = src;
	return;
}

char		Scalar::getChar() const
{
	return (this->c);
}

double		Scalar::getDouble() const
{
	return (this->d);
}

int			Scalar::getLever() const
{
	return (this->_lever);
}

Scalar		&Scalar::operator=(const Scalar &rhs)
{
	this->d = rhs.getDouble();
	return (*this);
}

void			Scalar::convertInt(std::ostream &o, Scalar const &rhs) const
{
	int i;
	if (rhs.getDouble() > INT_MAX || rhs.getDouble() < INT_MIN || isnan(rhs.getDouble()))
	{
		o << "int: impossible" << std::endl;
		return ;
	}
	try
	{
		i = static_cast<int>(rhs.getDouble());
	}
	catch(std::exception &e)
	{
		o << "int: impossible" << std::endl;
		return ;
	}
	o << "int: " << i << std::endl;
}

void			Scalar::convertFloat(std::ostream &o, Scalar const &rhs) const
{
	float f;
	try
	{
		f = static_cast<float>(rhs.getDouble());
	}
	catch(std::exception &e)
	{
		o << "float: impossible" << std::endl;
		return ;
	}
	o << "float: " << f;
	if (std::fmod(f, 1.0) == 0.0)
		o << ".0";
	o << "f" << std::endl;
}

std::string const	Scalar::getInput(void) const
{
	return (this->_str);
}

void			Scalar::convertChar(std::ostream &o, Scalar const &rhs) const
{
	char	ch;
	o << "char: ";
	if ((ch = rhs.getChar()) && ch > 31 && ch < 127)
		o << "\'" << ch << "\'" << std::endl;
	else if (is_zero(rhs.getInput()) || (ch != 0 && ch < 32) || ch > 127)
		o << "Non displayable" << std::endl;
	else
		o << "impossible" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Scalar const &rhs)
{
	rhs.convertChar(o, rhs);
	if (rhs.getLever() == 1)
	{

		o << "int: impossible" << std::endl;
		o << "double: impossible" << std::endl;
		o << "float: impossible" << std::endl;
		return (o);
	}
	rhs.convertInt(o, rhs);
	rhs.convertFloat(o, rhs);
	o << "double: " << rhs.getDouble();
	if (std::fmod(rhs.getDouble(), 1.0) == 0.0)
		o << ".0";
	o << std::endl;
	return (o);
}

Scalar::~Scalar(void)
{
	return;
}
