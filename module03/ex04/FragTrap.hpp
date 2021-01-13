/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:55:14 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/04 19:55:46 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string str);
		FragTrap(const FragTrap &src);
		virtual ~FragTrap(void);
		virtual void	attack(ClapTrap &enemy);

		FragTrap 		&operator=(const FragTrap &rhs);
		unsigned int	vaulthunter_dot_exe(std::string const &target);

	private:
};

#endif
