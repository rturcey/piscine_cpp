/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:11:18 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 11:32:03 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>

class	ISpaceMarine
{
	public:
		virtual					~ISpaceMarine(void) {}
		virtual ISpaceMarine*	clone(void) const = 0;
		virtual void			battleCry(void) const = 0;
		virtual void			rangedAttack(void) const = 0;
		virtual void			meleeAttack(void) const = 0;
};

#endif
