/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 09:34:24 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/19 09:52:08 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string	*panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete(panthere);
}

int		main(void)
{
	memoryLeak();
	return (1);
}
