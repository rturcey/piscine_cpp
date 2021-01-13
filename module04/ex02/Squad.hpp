/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:42:37 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 11:45:38 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class	Squad : public ISquad
{
	public:
		Squad(void);
		Squad(const Squad &src);
		virtual 				~Squad(void);
		virtual int				getCount(void) const;
		virtual ISpaceMarine*	getUnit(int unit) const;
		virtual int				push(ISpaceMarine *marine);


		Squad &operator=(const Squad &rhs);

	private:
		ISpaceMarine		**marines;
		int					count;
};

std::ostream	&operator<<(std::ostream &o, Squad const &rhs);

#endif
