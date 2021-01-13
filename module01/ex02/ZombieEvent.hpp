/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:13:37 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/19 12:28:55 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>

class	ZombieEvent
{
	public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void			announce(void);
	void			setZombieType(void);
	Zombie			*newZombie(std::string name);
	Zombie			*randomChump(void);
	std::string		get_type(void);

	private:
	std::string		type;
};

#endif
