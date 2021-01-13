/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 15:32:49 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/27 16:43:46 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public:
	HumanA(std::string name, Weapon &weap);
	~HumanA(void);
	void		attack(void);
	void		setName(std::string name);

	private:
	Weapon		&weapon;
	std::string	name;
};

#endif
