/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:45:19 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:53:16 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(const PowerFist &src);
		virtual ~PowerFist(void);
		virtual void		attack(void) const;

		PowerFist &operator=(const PowerFist &rhs);

	private:

};

std::ostream	&operator<<(std::ostream &o, PowerFist const &rhs);

#endif
