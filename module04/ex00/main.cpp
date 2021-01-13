/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:47:13 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:29:33 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Moldu.hpp"

int		main(void)
{
	{
		std::cout << "=============== Main from subject ===============" << std::endl;
		Sorcerer	robert("Robert", "the Magnificent");
		Victim		jim("Jimmy");
		Peon		joe("Joe");

		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	{
		std::cout << std::endl << "=============== Augmented main ===============" << std::endl;
		Sorcerer	robert("Robert", "the Magnificent");
		Victim		jim("Jimmy");
		Peon		joe("Joe");
		Moldu		dudley("Dudley");

		std::cout << robert << jim << joe << dudley;
		robert.polymorph(jim);
		robert.polymorph(joe);
		robert.polymorph(dudley);
	}

	return 0;
}
