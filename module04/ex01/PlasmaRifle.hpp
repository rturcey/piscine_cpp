/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:45:16 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:53:07 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &src);
		virtual ~PlasmaRifle(void);
		virtual void		attack(void) const;

		PlasmaRifle &operator=(const PlasmaRifle &rhs);

	private:

};

std::ostream	&operator<<(std::ostream &o, PlasmaRifle const &rhs);

#endif
