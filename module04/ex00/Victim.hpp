/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:57 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 09:58:13 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class	Victim
{
	public:
		Victim(std::string name);
		Victim(const Victim &src);
		virtual  ~Victim(void);
		virtual std::string		getName(void) const;
		virtual void			getPolymorphed(void) const;

		Victim &operator=(const Victim &rhs);

	protected:
		std::string		name;
		Victim(void);
};

std::ostream	&operator<<(std::ostream &o, Victim const &rhs);

#endif
