/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 10:04:58 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:30:26 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

class	FragTrap;

class	ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap &src);
		~ScavTrap(void);

		ScavTrap 		&operator=(const ScavTrap &rhs);
		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		void			challengeNewcomer(void);
		bool			isAlive(void);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int	amount);
		void			energyUp(unsigned int	amount);
		void			repair(void);
		void			attack(FragTrap &enemy);
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
