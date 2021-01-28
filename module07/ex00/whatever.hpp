/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:45:22 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/21 11:06:38 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CPP
#define WHATEVER_CPP

template <typename T>
void swap(T &v1, T &v2)
{
	T v3;

	v3 = v1;
	v1 = v2;
	v2 = v3;
}

template <typename T>
T min(T v1, T v2)
{
	if (v1 < v2)
		return (v1);
	else
		return (v2);
}

template <typename T>
T max(T v1, T v2)
{
	if (v1 > v2)
		return (v1);
	else
		return (v2);
}

#endif
