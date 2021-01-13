/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:11:30 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/21 15:28:55 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}

const Brain		&Human::getBrain(void) const
{
	return (brain);
}

std::string		Human::identify(void) const
{
	std::ostringstream		ret;

	ret << std::hex << &this->brain;
	return (ret.str());
}
