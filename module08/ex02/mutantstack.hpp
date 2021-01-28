/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 11:16:06 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/28 11:51:23 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {};
		MutantStack(const MutantStack &src) : std::stack<T>(src) {};
		virtual ~MutantStack(void) {};

		typedef typename	std::stack<T>::container_type::iterator iterator;

		MutantStack 		&operator=(const MutantStack &rhs)
		{
			this->c = rhs.c;
			return (*this);
		}
		iterator			begin(void)
		{
			return (this->c.begin());
		}
		iterator			end(void)
		{
			return (this->c.end());
		}

	private:

};

#endif
