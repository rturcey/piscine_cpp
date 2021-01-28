/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:16:23 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/21 14:27:15 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void	iter(T *tab, int size, void (&f)(T const &))
{
	for (int i = 0 ; i < size ; i++)
		f(tab[i]);
}

template <typename T>
void	impair(T &elt)
{
	if (elt % 2)
		std::cout << elt << std::endl;
}

template <typename T>
void	negative(T &elt)
{
	if (elt < 0)
		std::cout << elt << std::endl;
}

template <typename T>
void	up(T &elt)
{
	if (elt >= 65 && elt <= 90)
		std::cout << elt << std::endl;
}

#endif
