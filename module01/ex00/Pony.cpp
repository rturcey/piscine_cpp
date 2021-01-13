/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:48:41 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/11 10:12:05 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "Oh god, I'm a pony ! Please make my life beautiful !" << std::endl;
	std::cout << "What's my name ? ";
	std::cin >> this->name;
	std::cout << "What's my color ? ";
	std::cin >> this->color;
	std::cout << "And what's your name, kiddo ? ";
	std::cin >> this->murderer;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "That fucking kid named " << this->murderer;
	std::cout << " destroyed my back. Well, I guess that's over." << std::endl;
	std::cout << "Those were the last words of " << this->name << ", a " << this->color << " and lovely pony, died too young." << std::endl;
	std::cout << "DON'T RIDE PONIES - DON'T EAT THEM NEITHER." << std::endl;
}

