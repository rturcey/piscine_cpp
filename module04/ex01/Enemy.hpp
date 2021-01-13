/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:53:33 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 11:34:34 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class	Enemy
{
	public:
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &src);
		virtual ~Enemy(void);
		virtual void	takeDamage(int dmg);
		int				getHP(void) const;
		std::string		getType(void) const;

		Enemy &operator=(const Enemy &rhs);

	protected:
		Enemy(void);
		int				hp;
		std::string		type;

};

std::ostream	&operator<<(std::ostream &o, Enemy const &rhs);

#endif
