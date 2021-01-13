/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:58:55 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:34:45 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(const SuperMutant &src);
		virtual ~SuperMutant(void);

		SuperMutant &operator=(const SuperMutant &rhs);
		virtual void	takeDamage(int);

	private:

};

std::ostream	&operator<<(std::ostream &o, SuperMutant const &rhs);

#endif
