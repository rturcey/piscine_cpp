/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:00:06 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:34:40 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(const RadScorpion &src);
		virtual ~RadScorpion(void);

		RadScorpion &operator=(const RadScorpion &rhs);
		virtual void	takeDamage(int);

	private:

};

std::ostream	&operator<<(std::ostream &o, RadScorpion const &rhs);

#endif
