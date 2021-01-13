/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:37:04 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:48:19 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class	AWeapon
{
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &src);
		virtual ~AWeapon(void);
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;

		AWeapon &operator=(const AWeapon &rhs);

	protected:
		std::string		name;
		int				apcost;
		int				damage;
		AWeapon(void);

};

std::ostream	&operator<<(std::ostream &o, AWeapon const &rhs);

#endif
