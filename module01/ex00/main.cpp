/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:48:16 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/29 09:44:09 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	first;
}

void	ponyOnTheHeap(void)
{
	Pony	*second = new Pony;
	delete second;
}

int		main(void)
{
	std::cout << "Hi there ! You're gonna have two ponies, congrats. One will be born from the stack, and the other from the heap ! Exciting, isn't it ?";
	std::cout << std::endl << "The first is coming..." << std::endl;
	ponyOnTheStack();
	std::cout << std::endl << "And now, the second..." << std::endl;
	ponyOnTheHeap();
	return (0);
}
