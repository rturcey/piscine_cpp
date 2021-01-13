/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:55:14 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 08:31:23 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string str);
		FragTrap(const FragTrap &src);
		~FragTrap(void);
		void			attack(ClapTrap &enemy);

		FragTrap 		&operator=(const FragTrap &rhs);
		unsigned int	vaulthunter_dot_exe(std::string const &target);

	private:
};

#endif
