/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:07:03 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/19 09:29:23 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	search(Contact c[8], int nb)
{
	std::string	index;
	int			result;

	result = 0;
	if (nb == 0)
	{
		std::cerr << "Your Phonebook is empty !" << std::endl;
		return ;
	}
	for (int i = 0 ; i < nb ; i++)
		c[i].print_truncated(i);
	std::cout << "Please type an index : ";
	while (42)
	{
		std::getline(std::cin, index);
		if (!(isdigit(index[0])) || index[1] || (result = index[0] - 48) < 1 || result > nb)
			std::cerr << "/!\\ Please type a valid index : ";
		else
		{
			c[result - 1].print_full();
			break;
		}
	}
	return ;
}

Contact	add(void)
{
	Contact		new_contact;

	return (new_contact);
}

int		main(void)
{
	std::string	buf;
	Contact		contacts[8];
	int			nb;

	nb = 0;
	std::cout << "Welcome to your wonderfull Phonebook !\nPlease type ADD, SEARCH or EXIT" << std::endl;
	while (42)
	{
		std::getline(std::cin, buf);
		if (buf == "ADD")
		{
			if (nb == 8)
			{
				std::cerr << "Your phonebook is full (8/8)." << std::endl;
				continue ;
			}
			contacts[nb].init();
			nb++;
		}
		else if (buf == "SEARCH")
			search(contacts, nb);
		else if (buf == "EXIT")
			break;
		if (buf.length())
			std::cout << "\nPlease type ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
