/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 10:04:41 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/19 12:19:20 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:
	Zombie(void);
	~Zombie(void);

	void			announce(void);
	void			init(void);
	void			event(std::string type, std::string name);

	private:
	std::string		type;
	std::string		name;
};

#endif

