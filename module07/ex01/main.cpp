/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:58:12 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/21 14:27:13 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int		main(void)
{
	std::cout << "|---- INT ----|" << std::endl;
	int	tab[] = {1, 2, 3, -4, -5, 6, -7};
	std::cout << "tab[] = {1, 2, 3, -4, -5, 6, -7}" << std::endl;
	std::cout << "IMPAIR" << std::endl;
	iter(tab, 7, impair);
	std::cout << "NEGATIVE" << std::endl;
	iter(tab, 7, negative);
	std::cout << "|---- CHAR ----|" << std::endl;
	char tab2[] = "aBcDeFgH";
	std::cout << "tab2[] = \"aBcDeFgH\"" << std::endl;
	std::cout << "ONLY MAJ" << std::endl;
	iter(tab2, 8, up);
	return (0);
}
