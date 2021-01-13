/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:01:18 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:11:03 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class	FragTrap;
class	ScavTrap;
class	SuperTrap;
class	NinjaTrap;

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &src);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap &rhs);
		unsigned int	rangedAttack(std::string const &target);
		unsigned int	meleeAttack(std::string const &target);
		bool			isAlive(void);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int	amount);
		std::string		getName(void);
		void			energyUp(unsigned int	amount);
		void			repair(void);

	protected:
		std::string		type;
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
