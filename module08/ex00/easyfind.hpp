/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:40:45 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/25 11:03:20 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

class	NotFoundException : public std::exception
{
	public:
		virtual const char*	what() const throw()
		{
			return ("int not found");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int i)
{
	typename T::iterator		it;
	if ((it = find(container.begin(), container.end(), i)) != container.end())
		return (it);
	throw	NotFoundException();
}
