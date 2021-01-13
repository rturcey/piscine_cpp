/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:00:06 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 08:36:32 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <iostream>
#include "Enemy.hpp"

class	Warrior : public Enemy
{
	public:
		Warrior(void);
		Warrior(const Warrior &src);
		virtual ~Warrior(void);

		Warrior &operator=(const Warrior &rhs);
		virtual void	takeDamage(int);

	private:

};

std::ostream	&operator<<(std::ostream &o, Warrior const &rhs);

#endif
