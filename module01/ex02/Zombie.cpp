/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:04:06 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/21 10:12:06 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Well, finally dead." << std::endl;
	return;
}

void	Zombie::init(void)
{
	std::string		buf;

	this->type = "stack";
	std::cout << "What's your Zombie's name ? ";
	std::cin >> this->name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiiiiinsssssssssssss..." << std::endl;
}

void	Zombie::event(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}
