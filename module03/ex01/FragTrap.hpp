/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:55:14 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:29:46 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

class			ScavTrap;

class	FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string str);
		FragTrap(const FragTrap &src);
		~FragTrap(void);

		FragTrap 		&operator=(const FragTrap &rhs);
		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		unsigned int	vaulthunter_dot_exe(std::string const &target);
		bool			isAlive(void);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int	amount);
		void			energyUp(unsigned int	amount);
		void			repair(void);
		void			attack(ScavTrap &enemy);
		std::string		getName(void);

	private:
		std::string		name;
		unsigned int	hit;
		unsigned int	hit_max;
		unsigned int	energy;
		unsigned int	energy_max;
		unsigned int	lvl;
		unsigned int	melee;
		unsigned int	ranged;
		unsigned int	armor;

};

#endif
