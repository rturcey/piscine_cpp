/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 15:32:58 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/27 16:46:37 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
	HumanB(void);
	HumanB(std::string name);
	~HumanB(void);
	void		attack(void);
	void		setName(std::string name);
	void		setWeapon(Weapon &weapon);

	private:
	Weapon		*weapon;
	std::string	name;
};

#endif
