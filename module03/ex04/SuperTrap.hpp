/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 13:16:04 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/04 19:55:53 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class	NinjaTrap;

class	SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string str);
		SuperTrap(const SuperTrap &src);
		virtual ~SuperTrap(void);

		SuperTrap 		&operator=(const SuperTrap &rhs);
		using NinjaTrap::attack;
		using FragTrap::attack;
		virtual void			attack(SuperTrap &enemy);
		virtual void			attack(FragTrap &enemy);
		virtual void			attack(NinjaTrap &enemy);
		virtual void			attack(ScavTrap &enemy);

	private:
};

#endif
