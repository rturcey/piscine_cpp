/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:13:37 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/21 10:45:07 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>

class	ZombieHorde
{
	public:
	ZombieHorde(void);
	ZombieHorde(int n);
	~ZombieHorde(void);

	static int		get_n(void);
	void			announce(void);
	std::string		randomChump(void);

	private:
	Zombie			*horde;
	static int		nb;
};

#endif
