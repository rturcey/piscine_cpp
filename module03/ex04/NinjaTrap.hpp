/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:04:52 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/04 19:55:41 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class	SuperTrap;

class	NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string str);
		NinjaTrap(const NinjaTrap &src);
		virtual ~NinjaTrap(void);
		virtual void	attack(ScavTrap &enemy);
		virtual void	attack(FragTrap &enemy);
		virtual void	attack(NinjaTrap &enemy);
		virtual void	attack(SuperTrap &enemy);

		NinjaTrap 		&operator=(const NinjaTrap &rhs);
		void			ninjaShoebox(FragTrap &enemy);
		void			ninjaShoebox(ScavTrap &enemy);
		void			ninjaShoebox(NinjaTrap &enemy);
		void			ninjaShoebox(SuperTrap &enemy);

	private:
};

#endif
