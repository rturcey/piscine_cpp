/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:44 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:00:34 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon(std::string name = "Peon");
		Peon(const Peon &src);
		virtual  ~Peon(void);
		virtual void			getPolymorphed(void) const;

		Peon &operator=(const Peon &rhs);

	private:
		Peon(void);
};

std::ostream	&operator<<(std::ostream &o, Peon const &rhs);

#endif
