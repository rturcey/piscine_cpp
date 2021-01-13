/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:04:59 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 09:42:47 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class	Character
{
	public:
		Character(std::string const &name);
		Character(const Character &src);
		~Character(void);
		void		recoverAP(void);
		void		equip(AWeapon *weapon);
		void		attack(Enemy * &enemy);
		std::string	getName(void) const;
		int			getAP(void) const;
		AWeapon		*getWeapon(void) const;
		bool		isArmed(void) const;

		Character &operator=(const Character &rhs);

	private:
		Character(void);
		std::string		name;
		int				ap;
		AWeapon			*weapon;

};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif
