/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:12:37 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/26 15:22:02 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <numeric>

#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <iostream>

class	Span
{
	public:
		Span(unsigned int n);
		Span(const Span &src);
		~Span(void);

		unsigned int	getN(void) const;
		std::list<int>	getList(void) const;
		void			addNumber(int n);
		void			addNumber(std::list<int> &list);
		int				longestSpan(void) const;
		int				shortestSpan(void) const;

		Span &operator=(const Span &rhs);
		class		FullException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("List is full.");
				}
		};
		class		NotEnoughException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Your list is too short.");
				}
		};
		class		TooMuchException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Your list isn't big enough.");
				}
		};

	private:
		Span(void);
		unsigned int		_n;
		std::list<int>		_list;

};

std::ostream	&operator<<(std::ostream &o, Span const &rhs);

#endif
