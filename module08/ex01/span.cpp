/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:12:39 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/26 15:22:03 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n)
{
	return;
}

Span::Span(const Span &src)
{
	this->_n = src.getN();
	for (std::list<int>::const_iterator it = src._list.begin() ; it != src._list.end() ; it++)
		this->_list.push_back(*it);
}

void			Span::addNumber(int n)
{
	if (this->_list.size() == this->_n)
		throw FullException();
	else
		this->_list.push_back(n);
}

void			Span::addNumber(std::list<int> &list)
{
	if (this->_n - this->_list.size() < list.size())
		throw TooMuchException();
	this->_list.splice(this->_list.end(), list);
}

unsigned int	Span::getN(void) const
{
	return (this->_n);
}

int				Span::longestSpan(void) const
{
	if (this->_list.size() < 2)
		throw NotEnoughException();
	return (*max_element(_list.begin(), _list.end()) - *min_element(_list.begin(), _list.end()));
}

int				Span::shortestSpan(void) const
{
	if (this->_list.size() < 2)
		throw NotEnoughException();
	std::list<int>					cpy = this->_list;
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	itbis;
	int								stock;
	cpy.sort();
	it = cpy.begin();
	itbis = ++cpy.begin();
	stock = *itbis - *it;
	while (itbis != cpy.end())
	{
		if (*itbis - *it < stock)
			stock = *itbis - *it;
		itbis++;
		it++;
	}
	return (stock);
}

std::list<int>	Span::getList(void) const
{
	return (this->_list);
}

Span			&Span::operator=(const Span &rhs)
{
	this->_list.erase(this->_list.begin(), this->_list.end());
	for (std::list<int>::const_iterator it = rhs._list.begin() ; it != rhs._list.end() ; it++)
		this->_list.push_back(*it);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Span const &rhs)
{
	std::list<int>	buff = rhs.getList();
	for (std::list<int>::const_iterator it = buff.begin() ; it != buff.end() ; it++)
		std::cout << *it << std::endl;
	return (o);
}

Span::~Span(void)
{
	return;
}
