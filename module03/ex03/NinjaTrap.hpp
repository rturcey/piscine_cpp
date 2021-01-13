/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:04:52 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:32:23 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string str);
		NinjaTrap(const NinjaTrap &src);
		~NinjaTrap(void);
		void			attack(ScavTrap &enemy);
		void			attack(FragTrap &enemy);
		void			attack(NinjaTrap &enemy);

		NinjaTrap 		&operator=(const NinjaTrap &rhs);
		void			ninjaShoebox(FragTrap &enemy);
		void			ninjaShoebox(ScavTrap &enemy);
		void			ninjaShoebox(NinjaTrap &enemy);

	private:
};

#endif
