/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 15:33:28 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/27 15:48:48 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	void				setType(std::string type);
	const std::string	getType(void) const;

	private:
	std::string			type;
};

#endif
