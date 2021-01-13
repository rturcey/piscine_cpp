/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moldu.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:44 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 10:19:54 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOLDU_HPP
#define MOLDU_HPP

#include <iostream>
#include "Victim.hpp"

class	Moldu : public Victim
{
	public:
		Moldu(std::string name = "Moldu");
		Moldu(const Moldu &src);
		virtual  ~Moldu(void);
		virtual void			getPolymorphed(void) const;

		Moldu &operator=(const Moldu &rhs);

	private:
		Moldu(void);
};

std::ostream	&operator<<(std::ostream &o, Moldu const &rhs);

#endif
