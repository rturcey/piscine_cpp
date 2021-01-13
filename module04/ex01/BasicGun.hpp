/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BasicGun.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 08:37:58 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 08:38:10 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASICGUN_HPP
#define BASICGUN_HPP

#include <iostream>
#include "AWeapon.hpp"

class	BasicGun : public AWeapon
{
	public:
		BasicGun(void);
		BasicGun(const BasicGun &src);
		virtual ~BasicGun(void);
		virtual void		attack(void) const;

		BasicGun &operator=(const BasicGun &rhs);

	private:

};

std::ostream	&operator<<(std::ostream &o, BasicGun const &rhs);

#endif
