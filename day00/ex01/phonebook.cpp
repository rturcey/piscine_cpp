/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:07:03 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/11 09:36:36 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	search(Contact c[8], int nb)
{
	int		index;

	if (nb == 0)
	{
		std::cerr << "Your Phonebook is empty !" << std::endl;
		return ;
	}
	for (int i = 0 ; i < nb ; i++)
		c[i].print_truncated(i);
	std::cout << "Please type an index : ";
	while (!(std::cin >> index) || index < 1 || index > nb)
	{
		std::cerr << "/!\\ Please type a valid index : ";
		std::cin.clear();
        std::cin.ignore();
	}
	c[index - 1].print_full();
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
	while (42)
	{
		std::getline(std::cin, buf);
		if (buf == "ADD")
		{
			buf.assign("");
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
	}
	return (0);
}
